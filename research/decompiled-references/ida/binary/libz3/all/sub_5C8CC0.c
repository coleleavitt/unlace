__int64 __fastcall sub_5C8CC0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v13; // [rsp+18h] [rbp-A8h] BYREF
  int v14; // [rsp+1Ch] [rbp-A4h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-98h]
  __int64 v17; // [rsp+30h] [rbp-90h] BYREF
  __int64 v18; // [rsp+38h] [rbp-88h]
  __int64 v19; // [rsp+40h] [rbp-80h] BYREF
  int v20; // [rsp+48h] [rbp-78h]
  __int64 v21; // [rsp+50h] [rbp-70h] BYREF
  int v22; // [rsp+58h] [rbp-68h]
  __int64 v23; // [rsp+60h] [rbp-60h] BYREF
  int v24; // [rsp+68h] [rbp-58h]
  __int64 v25; // [rsp+70h] [rbp-50h] BYREF
  int v26; // [rsp+78h] [rbp-48h]
  __int64 v27; // [rsp+80h] [rbp-40h] BYREF
  int v28; // [rsp+88h] [rbp-38h]
  __int64 v29; // [rsp+90h] [rbp-30h] BYREF
  int v30; // [rsp+98h] [rbp-28h]

  v4 = *a1;
  v23 = a2;
  v15 = 0;
  v16 = v4;
  v18 = v4;
  v17 = 0;
  v13 = 0;
  v24 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  sub_FA4800(
    (_DWORD)a1 + 16,
    1,
    (unsigned int)&v13,
    (unsigned int)&v23,
    (unsigned int)&v21,
    (unsigned int)&v19,
    (__int64)&v15);
  v29 = a3;
  v30 = 0;
  v14 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_FA4800(
    (_DWORD)a1 + 16,
    1,
    (unsigned int)&v14,
    (unsigned int)&v29,
    (unsigned int)&v27,
    (unsigned int)&v25,
    (__int64)&v17);
  sub_FA3AF0(a1 + 2);
  v5 = sub_FB5F20((int)a1 + 144);
  v6 = v17;
  v7 = v5;
  if ( v17 )
  {
    v8 = v18;
    v9 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v8, v6);
  }
  v10 = v15;
  if ( !v15 )
    return v7;
  v11 = v16;
  v9 = (*(_DWORD *)(v15 + 8))-- == 1;
  if ( !v9 )
    return v7;
  sub_15D7BC0(v11, v10);
  return v7;
}

