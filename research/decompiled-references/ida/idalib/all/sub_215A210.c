void __fastcall sub_215A210(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int16 a5)
{
  char v8; // al
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = *(_BYTE *)(a2 + 114);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_WORD *)(a1 + 32) = a5;
  if ( (v8 & 7) == 6 )
  {
    v9 = (_QWORD *)operator new(0x18u);
    v9[1] = a2;
    v9[2] = a3;
    *v9 = off_2C73820;
    if ( a3 )
    {
      v11 = sub_215DEC0(a2);
      if ( v12 + v11 > (unsigned __int64)(a3 + 114) && a4 <= 0x71 )
      {
        sub_2159760(v13, v9, a3, a4);
        if ( v13[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 8LL))(v13[0]);
      }
    }
  }
  else
  {
    v9 = (_QWORD *)operator new(0x18u);
    sub_2159900(v9, a2, a3, a4, nullptr);
  }
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
