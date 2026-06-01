unsigned __int64 __fastcall sub_7558A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  void *v6; // rdi
  _QWORD *v7; // rbx
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 i; // r14
  bool v11; // zf
  unsigned int v13; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  v14 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = v2 + 176 * v1;
  v4 = v2 + 104;
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v4 + 60) & 1) != 0 )
      {
        v5 = *(_QWORD **)(v4 + 16);
        while ( v5 )
        {
          v6 = v5;
          v5 = (_QWORD *)*v5;
          operator delete(v6, 0x10u);
        }
        memset(*(void **)v4, 0, 8LL * *(_QWORD *)(v4 + 8));
        v7 = *(_QWORD **)(v4 - 40);
        *(_QWORD *)(v4 + 24) = 0;
        *(_QWORD *)(v4 + 16) = 0;
        while ( v7 )
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          operator delete(v8, 0x10u);
        }
        memset(*(void **)(v4 - 56), 0, 8LL * *(_QWORD *)(v4 - 48));
        *(_QWORD *)(v4 - 32) = 0;
        *(_QWORD *)(v4 - 40) = 0;
        if ( (*(_BYTE *)(v4 + 60) & 4) == 0 )
        {
          v9 = *(_QWORD *)(v4 - 80);
          for ( i = v9 + 5LL * *(_QWORD *)(v4 - 72); i != v9; v9 += 5 )
          {
            v11 = *(_BYTE *)(v9 + 4) == 0;
            v13 = *(_DWORD *)v9;
            if ( v11 )
              sub_753C70((__int64 *)(v4 - 56), &v13);
            else
              sub_753C70((__int64 *)v4, &v13);
          }
        }
      }
      if ( v3 == v4 + 72 )
        break;
      v4 += 176;
    }
  }
  return v14 - __readfsqword(0x28u);
}

