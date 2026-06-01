/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pipe_process
// Address: 0x00000000000C7A08

//----- (00000000000C7A08) ----------------------------------------------------
__int64 __fastcall pipe_process(int *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  pthread_mutex_t *v9; // x0
  int v10; // w24
  int v11; // w25
  __int64 v12; // x0
  int v13; // w8
  __int64 v14; // x23
  const char *v15; // x3
  void *ptr; // [xsp+0h] [xbp-70h] BYREF
  __int64 v18; // [xsp+8h] [xbp-68h]
  __int64 v19; // [xsp+10h] [xbp-60h]
  __int64 v20; // [xsp+18h] [xbp-58h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 )
  {
    v10 = -1;
    if ( a1 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v8 = pipe((int *)&ptr);
  if ( !(_DWORD)v8 )
  {
    v10 = (int)ptr;
    *a2 = HIDWORD(ptr);
    if ( a1 )
      goto LABEL_9;
LABEL_7:
    v11 = -1;
    goto LABEL_14;
  }
  v9 = (pthread_mutex_t *)__errno(v8);
  if ( v9->__lock )
  {
    if ( under_debugger )
      goto LABEL_33;
    v9 = interr(3181);
LABEL_31:
    if ( !under_debugger )
      v9 = interr(3182);
LABEL_33:
    __break(1u);
    sub_39134(v9);
  }
  v10 = -1;
  *a2 = -1;
  if ( !a1 )
    goto LABEL_7;
LABEL_9:
  v12 = pipe((int *)&ptr);
  if ( !(_DWORD)v12 )
  {
    v13 = (int)ptr;
    v11 = HIDWORD(ptr);
    goto LABEL_13;
  }
  v9 = (pthread_mutex_t *)__errno(v12);
  if ( v9->__lock )
    goto LABEL_31;
  v13 = -1;
  v11 = -1;
LABEL_13:
  *a1 = v13;
LABEL_14:
  *(_QWORD *)(a3 + 32) = v10;
  *(_QWORD *)(a3 + 40) = v11;
  ptr = nullptr;
  v18 = 0;
  v19 = 0;
  v14 = launch_process(a3, (__int64)&ptr);
  if ( v10 != -1 )
    close(v10);
  if ( v11 != -1 )
    close(v11);
  if ( !v14 )
  {
    if ( v18 )
      v15 = (const char *)ptr;
    else
      v15 = &byte_F154B;
    sub_3C748(a4, "%s: %s", *(const char **)(a3 + 16), v15);
    if ( a1 )
      close(*a1);
    if ( a2 )
      close(*a2);
  }
  if ( ptr )
  {
    v18 = 0;
    qfree(ptr);
    ptr = nullptr;
    v19 = 0;
  }
  return v14;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
