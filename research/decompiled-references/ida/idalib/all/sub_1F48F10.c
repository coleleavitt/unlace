void __fastcall sub_1F48F10(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r12
  char v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-90h]
  _QWORD *v14; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+18h] [rbp-80h]
  char v16; // [rsp+20h] [rbp-78h]
  _BYTE v17[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-58h]

  v2 = (__int64 *)a2;
  sub_1F48A90((__int64)&v14, a1, a2);
  if ( a2 )
    v2 = (__int64 *)(a2 + 64);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)v2 | (unsigned __int8)(*v2 >> 1)) & 1) != 0 )
  {
    v5 = v15;
    v6 = (__int64)(v2 - 8);
    v7 = v16;
    if ( v14 )
    {
      v8 = a1 + 1;
      if ( v2 != (__int64 *)&dword_40 )
        v6 = (__int64)v2;
      if ( !v16 )
        v5 = 0;
      sub_1F3D810(v8, v6, v14, v5, v3, v4);
    }
    else
    {
      v13 = v15;
      sub_1F43500((__int64)v17, (__int64)a1, (__int64)(v2 - 8));
      if ( v18 && (*((_BYTE *)v18 + 28) & 0x7Fu) - 64 <= 2 )
      {
        v11 = v13;
        v12 = a1 + 1;
        if ( v2 != (__int64 *)&dword_40 )
          v6 = (__int64)v2;
        if ( !v7 )
          v11 = 0;
        sub_1F3D810(v12, v6, v18, v11, v9, v10);
      }
      sub_1F42E40((__int64)v17);
    }
  }
}
