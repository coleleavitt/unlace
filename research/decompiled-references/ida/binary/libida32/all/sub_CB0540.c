__int64 __fastcall sub_CB0540(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v14; // ebp
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-80h]
  unsigned int v23; // [rsp+20h] [rbp-68h]
  unsigned __int8 v24; // [rsp+27h] [rbp-61h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = v5;
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 > 1 )
    v21 = sub_F3F310(v5, a2, a3, a4);
  v6 = *(_QWORD *)(v21 + 32);
  v8 = sub_CC2440(a1[158], v6);
  v9 = *(_QWORD *)(a2 + 16);
  v25 = *(_QWORD *)(v9 + 8);
  v10 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57;
  if ( (unsigned int)v11 > 1 )
    v10 = sub_C8ADC0(v10, v6, v11, v7);
  v12 = sub_CC2440(a1[158], *(_QWORD *)(v10 + 32));
  v27[0] = v9 | 2;
  v23 = sub_CAE4E0((__int64)a1, v27, 13, 1u, 0, 1, 0);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 48LL))(a1, v9) )
  {
    v27[0] = a2 | 4;
    v24 = sub_D01960(a1, 13, v23, v27);
    if ( v24 )
    {
      if ( !*(_DWORD *)(v21 + 20) )
        return v24;
      v14 = 0;
      while ( 1 )
      {
        v27[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D0EEB0(a1, 13, v23, v27) )
          break;
        v27[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D0FAA0(a1, v12, v14, v27) )
          break;
        if ( v8 == v12 )
        {
          v15 = sub_F34320(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v25 != v6 && v15 )
          {
            v16 = sub_CC2920(a1[158], v6);
            v17 = a1[158];
            v27[0] = a2 | 4;
            v26 = v16;
            v18 = sub_CC2430(v17);
            v19 = sub_BDA860(a2, v18);
            v20 = (v19 >> 3) & 7;
            if ( ((v19 >> 3) & 7) == 7 )
              v20 = 1;
            if ( !(unsigned __int8)sub_D1E710(a1, v26, v20, v27) )
              return 0;
          }
        }
        else if ( !(unsigned __int8)sub_C91730((__int64)a1, v12, v8, v6, a2) )
        {
          return 0;
        }
        v27[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CF5810(a1, v8, v14, v27) )
          return 0;
        if ( ++v14 == *(_DWORD *)(v21 + 20) )
          return v24;
      }
    }
  }
  return 0;
}

