__int64 __fastcall sub_204E0F0(__int64 a1, __int64 a2, char *a3)
{
  unsigned __int8 v4; // dl
  __int64 result; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 i; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // eax
  char v26; // dl
  __int64 v27; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+8h] [rbp-E0h]
  __int64 v29; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-C0h]
  _BYTE v32[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = *a3;
  if ( v4 <= 1u )
    return sub_2058290(*(_QWORD *)(a1 + 8));
  if ( *(_BYTE *)a1 == 2 )
  {
    v26 = sub_20510E0(a2);
    result = a1;
    if ( v26 )
      return result;
    v4 = *a3;
  }
  result = 0;
  if ( v4 == 5 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 8) != 18 )
    {
      v8 = *(unsigned int *)(v7 + 32);
      v9 = *((_DWORD *)a3 + 8);
      v10 = *(_DWORD *)(v7 + 32);
      if ( v9 > 0x40 )
      {
        v28 = *(unsigned int *)(v7 + 32);
        v25 = sub_2206780(a3 + 24);
        v8 = v28;
        if ( v9 - v25 > 0x40 )
          return sub_2058290(v7);
        v11 = **((_QWORD **)a3 + 3);
      }
      else
      {
        v11 = *((_QWORD *)a3 + 3);
      }
      if ( v8 <= v11 )
        return sub_2058290(v7);
      ptr = v32;
      v31 = 0x1000000000LL;
      if ( v8 > 0x10 )
        sub_2237220(&ptr, v32, v8, 8);
      v12 = sub_20CB0D0(a1);
      v14 = sub_20C31F0(v12);
      if ( *((_DWORD *)a3 + 8) <= 0x40u )
        v15 = *((_QWORD *)a3 + 3);
      else
        v15 = **((_QWORD **)a3 + 3);
      if ( v10 )
      {
        v16 = (unsigned int)(v10 - 1);
        for ( i = 0; ; ++i )
        {
          if ( v15 == i )
          {
            v23 = (unsigned int)v31;
            v24 = (unsigned int)v31 + 1LL;
            if ( v24 > HIDWORD(v31) )
            {
              sub_2237220(&ptr, v32, v24, 8);
              v23 = (unsigned int)v31;
            }
            v13 = ptr;
            *((_QWORD *)ptr + v23) = a2;
            v22 = (unsigned int)(v31 + 1);
            LODWORD(v31) = v31 + 1;
          }
          else
          {
            v18 = sub_2055240(v14, i, 0);
            v19 = sub_205EAD0(a1, v18, 0);
            v20 = (unsigned int)v31;
            v21 = (unsigned int)v31 + 1LL;
            if ( v21 > HIDWORD(v31) )
            {
              v29 = v19;
              sub_2237220(&ptr, v32, v21, 8);
              v20 = (unsigned int)v31;
              v19 = v29;
            }
            v13 = ptr;
            *((_QWORD *)ptr + v20) = v19;
            v22 = (unsigned int)(v31 + 1);
            LODWORD(v31) = v31 + 1;
          }
          if ( v16 == i )
            break;
        }
      }
      else
      {
        v22 = (unsigned int)v31;
      }
      result = sub_205D2F0(ptr, v22, v13);
      if ( ptr != v32 )
      {
        v27 = result;
        free(ptr);
        return v27;
      }
    }
  }
  return result;
}
