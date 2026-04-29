__int64 __fastcall sub_289100(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rax
  const char *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // esi
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-70h]
  _QWORD v18[13]; // [rsp+10h] [rbp-68h] BYREF

  v18[5] = __readfsqword(0x28u);
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
          sub_283C00(&v16, a1, a2);
          v9 = v16;
          v10 = *v17;
          if ( v16 == *v17 )
          {
            v18[0] = -1;
            v18[1] = -4294967226LL;
            v18[2] = 0xFFFFFFFFLL;
            v18[3] = 0;
            v13 = qalloc_or_throw(48, (__int64)a1, v7, v8);
            *(_QWORD *)(v13 + 16) = -1;
            v14 = v13;
            *(_DWORD *)(v13 + 24) = 70;
            *(_QWORD *)(v13 + 28) = -1;
            sub_25AA70(v13 + 16, (__int64)v18);
            *(_QWORD *)v14 = v10;
            v15 = *(__int64 **)(v10 + 8);
            *(_QWORD *)(v14 + 8) = v15;
            *v15 = v14;
            *(_QWORD *)(v10 + 8) = v14;
            v10 = v14;
            ++*(_QWORD *)(v9 + 16);
            sub_255050((__int64)v18);
            *(_DWORD *)(v14 + 24) = 70;
          }
          v11 = *(_DWORD *)(v10 + 28);
          if ( v11 != -1 )
            sub_27FF50(a1[8], v11, *(_DWORD *)(a2 + 12));
          *(_DWORD *)(v10 + 28) = *(_DWORD *)(a2 + 12);
          v4 = 1;
          *(_DWORD *)(a2 + 12) = -1;
        }
      }
    }
  }
  return v4;
}
