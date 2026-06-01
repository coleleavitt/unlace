__int64 __fastcall sub_511610(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  unsigned __int8 v4; // al
  __int64 v6; // rax
  bool v7; // cc
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r15
  size_t v11; // r8
  __int64 v12; // rsi
  size_t v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // [rsp+0h] [rbp-458h]
  size_t v21; // [rsp+8h] [rbp-450h]
  char s[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v23; // [rsp+418h] [rbp-40h]

  v2 = a2[6] == 0;
  v23 = __readfsqword(0x28u);
  if ( v2 )
  {
    v6 = qtime64();
    v7 = a2[4] <= 1u;
    a2[6] = v6;
    if ( !v7 )
      goto LABEL_3;
  }
  else if ( a2[4] > 1u )
  {
    goto LABEL_3;
  }
  qstrftime64(s, 1024, "%Y-%m-%d %H:%M:%S.", a2[6]);
  v8 = strlen(s);
  v9 = a2[4];
  v10 = v8;
  v11 = v8;
  if ( v9 )
  {
    --v9;
    v11 = v8 + v9;
  }
  v12 = a2[3];
  v13 = v11 + 1;
  if ( a2[5] < v11 + 1 )
  {
    v21 = v11;
    v20 = v11 + 1;
    v18 = qvector_reserve(a2 + 3, v12, v13, 1);
    v11 = v21;
    v13 = v20;
    a2[3] = v18;
    v12 = v18;
  }
  a2[4] = v13;
  *(_BYTE *)(v12 + v11) = 0;
  memmove((void *)(v9 + a2[3]), s, v10);
  qsnprintf(s, 1024, "%03d ", *((_DWORD *)a2 + 12) / 0x3E8u);
  v14 = a2[4];
  if ( v14 )
  {
    v16 = v14 + 3;
    v15 = v14 + 4;
    --v14;
  }
  else
  {
    v15 = 5;
    v16 = 4;
  }
  v17 = a2[3];
  if ( a2[5] < v15 )
  {
    v19 = qvector_reserve(a2 + 3, v17, v15, 1);
    a2[3] = v19;
    v17 = v19;
  }
  a2[4] = v15;
  *(_BYTE *)(v17 + v16) = 0;
  *(_DWORD *)(a2[3] + v14) = *(_DWORD *)s;
LABEL_3:
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, v4);
}
