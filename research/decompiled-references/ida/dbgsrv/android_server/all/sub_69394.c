/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69394
// Address: 0x0000000000069394

//----- (0000000000069394) ----------------------------------------------------
void __fastcall sub_69394(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 *v5; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x27
  __int64 v8; // x28
  __int64 v9; // x26
  unsigned __int64 *v10; // x26
  __int64 v11; // t1
  void **v12; // x20
  const char *v13; // x0
  unsigned __int64 v14; // x19
  const char *v15; // x23
  const char *v16; // x1
  void *v17; // x0
  int v18; // [xsp+8h] [xbp-88h] BYREF
  void *ptr; // [xsp+10h] [xbp-80h]
  unsigned __int64 v20; // [xsp+18h] [xbp-78h]
  unsigned __int64 v21; // [xsp+20h] [xbp-70h]
  __int64 v22; // [xsp+28h] [xbp-68h]

  v5 = (unsigned __int64 *)(a1 + 88);
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v7 = *v5;
    v8 = v6 - 1;
    v9 = *v5 + 32 * (v6 - 1);
    v11 = *(_QWORD *)(v9 + 16);
    v10 = (unsigned __int64 *)(v9 + 16);
    v12 = (void **)(v10 - 1);
    if ( v11 )
      v13 = (const char *)*v12;
    else
      v13 = &byte_F154B;
    v15 = *(const char **)a3;
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 )
      v16 = *(const char **)a3;
    else
      v16 = &byte_F154B;
    if ( !strcmp(v13, v16) )
      return;
    if ( *(_DWORD *)(v7 + 32 * v8) == a2 )
    {
      if ( v12 != (void **)a3 )
      {
        if ( v14 < 2 )
        {
          *v10 = 0;
        }
        else
        {
          if ( *(_QWORD *)(v7 + 32 * v8 + 24) >= v14 )
          {
            v17 = *v12;
          }
          else
          {
            v17 = qvector_reserve((pthread_mutex_t *)(v10 - 1), *v12, v14, 1u);
            *v12 = v17;
          }
          *v10 = v14;
          memmove(v17, v15, v14 - 1);
          *((_BYTE *)*v12 + v14 - 1) = 0;
        }
      }
      return;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 8);
  }
  v18 = a2;
  v20 = 0;
  v21 = 0;
  ptr = nullptr;
  if ( v14 )
  {
    ptr = qalloc_or_throw(v14);
    v21 = v14;
    memcpy(ptr, *(const void **)a3, v14);
    v20 = v14;
  }
  sub_69548(v5, (unsigned __int64)&v18);
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
    ptr = nullptr;
    v21 = 0;
  }
}
// F154B: using guessed type char byte_F154B;
