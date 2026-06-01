/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C88E0
// Address: 0x00000000000C88E0

//----- (00000000000C88E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_C88E0(__int64 a1, int *a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  int v6; // eax
  char v7; // cl
  __int64 v8; // rcx
  unsigned __int64 *v9; // rbx
  __int64 v10; // rbp
  char *v12; // rcx
  char *v13; // rsi
  bool v14; // cf
  unsigned __int64 v15[2]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+28h] [rbp-50h]
  char v19; // [rsp+2Ch] [rbp-4Ch]
  __int128 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+50h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  if ( a4 )
  {
    v5 = sub_AF5A0(a4);
    v6 = *a2;
    *(_OWORD *)ptr = 0;
    v17 = 0;
    v18 = v6;
    if ( v6 == -1 )
      v7 = 0;
    else
      v7 = must_journal();
    v19 = v7;
    v8 = (unsigned int)a2[1];
    v15[0] = *((_QWORD *)a2 + 1);
    v15[1] = v15[0] + v8;
    sub_C8AF0(ptr, v15);
    if ( !a3 )
    {
      if ( 24 * (__int64)ptr[1] )
      {
        v12 = (char *)ptr[0] + 24 * (__int64)ptr[1] - 24;
        if ( v12 > ptr[0] )
        {
          v13 = (char *)ptr[0] + 24;
          do
          {
            v21 = *((_QWORD *)v13 - 1);
            v20 = *(_OWORD *)(v13 - 24);
            *(v13 - 8) = v12[16];
            *(_OWORD *)(v13 - 24) = *(_OWORD *)v12;
            v12[16] = v21;
            *(_OWORD *)v12 = v20;
            v12 -= 24;
            v14 = v13 < v12;
            v13 += 24;
          }
          while ( v14 );
        }
      }
    }
    v9 = (unsigned __int64 *)ptr[0];
    v10 = 24 * (__int64)ptr[1];
    if ( 24 * (__int64)ptr[1] )
    {
      do
      {
        if ( *((unsigned __int8 *)v9 + 16) == a3 )
          rangeset_t_sub(v5, v9);
        else
          rangeset_t_add(v5, v9);
        v9 += 3;
        v10 -= 24;
      }
      while ( v10 );
      v9 = (unsigned __int64 *)ptr[0];
    }
    if ( v9 )
    {
      ptr[1] = nullptr;
      qfree(v9);
      ptr[0] = nullptr;
      v17 = 0;
    }
  }
  return __readfsqword(0x28u);
}
