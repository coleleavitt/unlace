__int64 __fastcall sub_1EE3570(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  int v10; // r13d
  int *v11; // rax
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rcx
  char *v17; // r14
  size_t v18; // r10
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // [rsp+Ch] [rbp-ACh]
  size_t v22; // [rsp+10h] [rbp-A8h]
  unsigned int v23; // [rsp+18h] [rbp-A0h]
  int v24; // [rsp+1Ch] [rbp-9Ch]
  void *s1; // [rsp+28h] [rbp-90h] BYREF
  __int64 v26[3]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v27; // [rsp+48h] [rbp-70h]
  _QWORD v28[2]; // [rsp+50h] [rbp-68h] BYREF
  char *v29; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+68h] [rbp-50h]
  __int64 *v31; // [rsp+70h] [rbp-48h]

  result = 1;
  if ( *(_DWORD *)(a2 + 412) > *(_DWORD *)(a1 + 20) )
  {
    v3 = *(_QWORD *)(a2 + 1704);
    if ( !v3 )
      return 0;
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_QWORD *)(v3 + 24);
    v26[1] = a2;
    v27 = 0;
    v26[2] = v4;
    v6 = *(_DWORD **)(a1 + 24);
    v26[0] = v5;
    v7 = *(_QWORD *)(v3 + 8);
    ++*v6;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(unsigned int *)(v7 + 4LL * (v8 & (unsigned int)(*(_DWORD *)v3 - 1)));
    if ( !(_DWORD)v9 )
      return 0;
    s1 = (void *)(*(_QWORD *)(v3 + 16) + v9);
    v10 = *(unsigned __int16 *)s1;
    v11 = (int *)((char *)s1 + 2);
    s1 = (char *)s1 + 2;
    if ( !v10 )
      return 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = *v11;
      s1 = v11 + 1;
      v14 = sub_1EA91E0((char **)&s1);
      v15 = HIDWORD(v14);
      v16 = (unsigned int)(v14 + HIDWORD(v14));
      if ( v8 == v13 )
      {
        v21 = v14;
        v17 = (char *)s1;
        v18 = (unsigned int)(v14 - 1);
        if ( v18 == *(_QWORD *)(a1 + 8) )
        {
          v23 = v14 + HIDWORD(v14);
          if ( (_DWORD)v14 == 1 )
          {
            v20 = 1;
LABEL_13:
            v28[0] = v17;
            v28[1] = v18;
            v29 = &v17[v20];
            v30 = v15;
            v31 = v26;
            if ( v29 )
            {
              ++**(_DWORD **)(a1 + 32);
              *(_QWORD *)(a1 + 40) = sub_1EE2180(v26, (__int64)v28, (__int64)&v17[v20], v30);
              return v27 ^ 1u;
            }
            return 0;
          }
          v24 = HIDWORD(v14);
          v22 = (unsigned int)(v14 - 1);
          v19 = memcmp(s1, *(const void **)a1, v22);
          v18 = v22;
          v15 = v24;
          v16 = v23;
          v20 = v21;
          if ( !v19 )
            goto LABEL_13;
        }
        s1 = &v17[v16];
      }
      else
      {
        s1 = (char *)s1 + v16;
      }
      if ( v10 == ++v12 )
        return 0;
      v11 = (int *)s1;
    }
  }
  return result;
}
