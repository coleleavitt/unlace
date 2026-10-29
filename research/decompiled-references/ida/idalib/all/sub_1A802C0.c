__int64 __fastcall sub_1A802C0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdi
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]

  v2 = sub_1A800B0(a1, a2);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v6 = *(_QWORD *)(v5 + 72);
  if ( (v6 & 1) != 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
LABEL_3:
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v8;
    if ( v7 )
    {
      if ( (v7 & 4) != 0 )
      {
        v9 = 0;
        if ( v8 )
        {
          v10 = *(_QWORD **)v8;
          v11 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
          if ( *(_DWORD *)(v8 + 8) != v11 )
          {
            *(_DWORD *)(v8 + 8) = v11;
            v20 = v8;
            (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v10 + 152LL))(v10, v5, *v10, 0);
            v8 = v20;
          }
          v9 = *(_QWORD *)(v8 + 16);
        }
      }
    }
    goto LABEL_9;
  }
  v14 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v9 = 0;
    goto LABEL_9;
  }
  v9 = v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v6 & 2) != 0 )
  {
    v15 = v14[2295];
    v16 = v5 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v15 )
    {
      v17 = v14[294];
      v14[304] += 24LL;
      v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v14[295] >= v18 + 24 && v17 )
      {
        v14[294] = v18 + 24;
        v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v19 = sub_986170((__int64)(v14 + 294), 24, 24, 3, v3, v4);
        v18 = v19 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v19 = v15;
      v16 = v18 | 4;
      *(_DWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = v5;
    }
    v7 = v16 & 0xFFFFFFFFFFFFFFFELL;
    v6 = v7 | 1;
    *(_QWORD *)(v5 + 72) = v7 | 1;
    goto LABEL_3;
  }
LABEL_9:
  v12 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 - 8) = v2;
  *(_QWORD *)(v9 + 8) = v12 & 0xFFFFFFFFFFFFFFF8LL | 3;
  return 0;
}
