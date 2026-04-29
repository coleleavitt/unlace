__int64 __fastcall sub_3E7BB0(__int64 a1, __int64 a2, _BYTE *a3, double a4)
{
  bool v5; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h]
  _BYTE *v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned int v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v5 = *(_DWORD *)a3 == 12;
  v18 = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_3E7920(*(_QWORD *)(a1 + 8), (__int64)a3, a4)
    && !(unsigned __int8)sub_3E7760(*(_QWORD *)(a1 + 8), (__int64)a3) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (__int64 (__fastcall **)())0xFFFFFFFF00000000LL;
    v12 = 0;
    if ( !(unsigned __int8)sub_3E7A80(v10, (__int64)&v11, a3, a4) )
    {
      sub_1181E0((__int64)&v11);
LABEL_2:
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)(a2 + 64);
      v13 = a2;
      v12 = v8;
      v14 = a3;
      v15 = 0;
      v11 = &off_4BD2D0;
      v16 = v7;
      v17 = 0;
      sub_11ABA0(a3, &v11);
      return v17;
    }
    sub_117D90((char *)&v11, *(_QWORD *)(a1 + 8));
    sub_117E50(a3 + 32, (char *)&v11);
    sub_1181E0((__int64)(a3 + 48));
    *(_DWORD *)a3 = 4;
    sub_1181E0((__int64)&v11);
  }
  return 1;
}
