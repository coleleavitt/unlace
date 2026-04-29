__int64 __fastcall sub_281D80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rax
  const char *v6; // r13
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // esi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v15; // [rsp+8h] [rbp-70h]
  _QWORD v16[13]; // [rsp+10h] [rbp-68h] BYREF

  v16[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 73 || *(_DWORD *)(a2 + 12) == -1 )
  {
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = 0;
    if ( !*(_QWORD *)(v3 + 72) && *(_DWORD *)(v3 + 8) == 57 )
    {
      v5 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v5 + 8) == 68 )
      {
        v6 = *(const char **)(v5 + 24);
        if ( !strcmp(v6, "__eh34_catch") || !strcmp(v6, "__eh34_unwind") )
        {
          sub_27C880(&v14, a1, a2);
          v7 = v14;
          v8 = *v15;
          if ( v14 == *v15 )
          {
            v16[0] = -1;
            v16[1] = -4294967226LL;
            v16[2] = 0xFFFFFFFFLL;
            v16[3] = 0;
            v11 = qalloc_or_throw(48);
            *(_QWORD *)(v11 + 16) = -1;
            v12 = v11;
            *(_DWORD *)(v11 + 24) = 70;
            *(_QWORD *)(v11 + 28) = -1;
            sub_2536F0(v11 + 16, (__int64)v16);
            *(_QWORD *)v12 = v8;
            v13 = *(__int64 **)(v8 + 8);
            *(_QWORD *)(v12 + 8) = v13;
            *v13 = v12;
            *(_QWORD *)(v8 + 8) = v12;
            v8 = v12;
            ++*(_QWORD *)(v7 + 16);
            sub_24DCD0((__int64)v16);
            *(_DWORD *)(v12 + 24) = 70;
          }
          v9 = *(_DWORD *)(v8 + 28);
          if ( v9 != -1 )
            sub_278BD0(a1[8], v9, *(_DWORD *)(a2 + 12));
          *(_DWORD *)(v8 + 28) = *(_DWORD *)(a2 + 12);
          v4 = 1;
          *(_DWORD *)(a2 + 12) = -1;
        }
      }
    }
  }
  return v4;
}
