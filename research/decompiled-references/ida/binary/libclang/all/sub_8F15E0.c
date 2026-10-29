__int64 __fastcall sub_8F15E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // r12
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD **v11; // rdi
  char v12; // al
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _DWORD v22[6]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h]
  unsigned int v24; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[104]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v3;
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a3;
  v7 = *(_QWORD **)(a1 + 408);
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
    {
      v12 = v10();
LABEL_7:
      if ( v12 )
        return 0;
      goto LABEL_8;
    }
    v11 = (_QWORD **)v9[3];
    v8 = (__int64 (__fastcall *)(__int64))(*v11)[3];
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 24LL))(v11[3]);
      goto LABEL_7;
    }
  }
  if ( ((unsigned __int8 (*)(void))v8)() )
    return 0;
LABEL_8:
  v3 = sub_9D9870(a1 + 384, v5, *(_QWORD *)(a1 + 584) + 40LL);
  if ( (_BYTE)v3 )
  {
    sub_A1BFE0(v22, *(_QWORD *)(a1 + 584) + 40LL);
    v13 = v25;
    if ( v25 )
    {
LABEL_25:
      if ( v13 == 1 )
      {
        v14 = v23;
      }
      else
      {
        if ( (unsigned int)(v13 - 2) <= 1 )
          BUG();
        v14 = *(_QWORD *)(v23 + 32);
      }
    }
    else
    {
      while ( v23 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v23 + 32) + 16LL) == v24 )
          break;
        if ( !v24 )
          break;
        v18 = **(_QWORD **)(v23 + v24 + 32);
        if ( (v18 & 2) != 0 || v18 <= 3 || (*(_BYTE *)(v23 + v24 + 28) & 4) == 0 )
          break;
        if ( v24 == -1 )
        {
          v20 = 0;
          v19 = 0xFFFFFFFFLL;
        }
        else
        {
          v19 = v24 - *(_DWORD *)(v23 + v24 + 24);
          v20 = (unsigned int)v19;
        }
        sub_A1C030(v26, v23, v19, v20);
        sub_A1C200(v22, v26, v21);
        sub_A1C0C0(v26);
        v13 = v25;
        if ( v25 )
          goto LABEL_25;
      }
      v14 = *(_QWORD *)(v23 + 32);
      if ( v24 != *(_DWORD *)(v14 + 16) )
      {
        if ( v24 )
          v14 = *(_QWORD *)(v23 + v24 + 32);
      }
    }
    v15 = sub_A2C8B0(*(_QWORD *)(v14 + 24), a2);
    v16 = *(_QWORD *)(a1 + 568);
    sub_A1C030(v26, v23, (unsigned int)(v22[0] + *(_DWORD *)(v15 + 8)), (unsigned int)(v22[0] + *(_DWORD *)(v15 + 8)));
    v17 = sub_A1A4E0(v16, 56);
    sub_A1C070(v17, v26);
    sub_A1C0C0(v26);
    sub_A1C0C0(v22);
    return v3;
  }
  return 0;
}

