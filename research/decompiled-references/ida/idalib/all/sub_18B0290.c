__int64 __fastcall sub_18B0290(__int64 a1, _DWORD *a2, _DWORD *a3, double a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // r12d
  bool v10; // al
  _QWORD *v11; // rbx
  __int64 v12; // r13
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int16 v18; // ax
  _QWORD *v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-80h]
  __int64 v21; // [rsp+0h] [rbp-80h]
  void *v22; // [rsp+8h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+10h] [rbp-70h]
  char v24; // [rsp+14h] [rbp-6Ch]
  unsigned int v25; // [rsp+18h] [rbp-68h] BYREF
  char v26; // [rsp+1Ch] [rbp-64h]
  __int64 v27; // [rsp+20h] [rbp-60h]
  int v28; // [rsp+28h] [rbp-58h]
  char v29; // [rsp+2Ch] [rbp-54h]

  if ( ((*a2 >> 14) & 5) != 0 )
  {
    *a3 = 6;
    return (__int64)a2;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 248);
    v23 = 1;
    v7 = *(_QWORD *)(v6 + 18640);
    v24 = 0;
    v22 = nullptr;
    result = sub_1C0AEA0(a1, a2, v7, &v22, 6);
    v8 = result;
    if ( result == 1 )
    {
      *a3 = 7;
      v11 = *(_QWORD **)(a1 + 248);
      v12 = v11[2330];
      v13 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a4);
      v15 = sub_EEE9A0(16, v11, 8u);
      *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x73;
      if ( unk_2CD7484 )
        sub_EE9B50(115);
      v18 = *(_WORD *)(v15 + 1);
      *(_DWORD *)(v15 + 4) = v13;
      *(_QWORD *)(v15 + 8) = v12;
      v18 &= 0xF801u;
      *(_WORD *)(v15 + 1) = v18;
      *(_BYTE *)(v15 + 2) = HIBYTE(v18) & 0xF7;
      v19 = *(_QWORD **)(a1 + 248);
      v26 &= ~1u;
      v28 = 1;
      v29 = 1;
      v25 = 2;
      v27 = 0;
      result = sub_C09C20(v19, v15, (int *)&v25, v14, v16, v17);
      if ( v25 > 1 )
      {
        v21 = result;
        sub_A4F8E0((int *)&v25);
        result = v21;
      }
      v9 = v23;
    }
    else
    {
      v9 = v23;
      if ( (*(_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x20000) != 0 )
      {
        *a3 = 6;
      }
      else
      {
        if ( v23 <= 0x40 )
          v10 = v22 == nullptr;
        else
          v10 = (unsigned int)sub_2206780(&v22) == v9;
        *a3 = !v10 + 7;
        result = v8;
      }
    }
    if ( v9 > 0x40 )
    {
      if ( v22 )
      {
        v20 = result;
        operator delete[](v22);
        return v20;
      }
    }
  }
  return result;
}
