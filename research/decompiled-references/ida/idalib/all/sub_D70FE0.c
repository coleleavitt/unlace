__int64 __fastcall sub_D70FE0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int8 v9; // al
  __int64 v10; // rdi
  char v11; // r12
  char v12; // r12
  __int64 v13; // rbp
  __int16 v14; // ax
  __int64 v15; // rdi
  __int16 v16; // r12
  __int16 v17; // r12
  __int64 v18; // rbp
  __int32 v19; // eax
  __int64 v20; // rdi
  int v21; // r12d
  int v22; // r12d
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // r12
  __int64 v28; // rbp
  __m128i v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rbp
  __m128i v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r9
  char v38; // r12
  char v39; // al
  __int64 v40; // rdi
  __m128i v41[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v42; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int16 v43; // [rsp+30h] [rbp-38h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v9 = sub_D22760(*(_QWORD *)(a1 + 560));
        v10 = *(_QWORD *)(a1 + 560);
        v42.m128i_i8[0] = v9;
        v41[0].m128i_i8[0] = sub_D22760(v10);
        v3 = sub_D6EB20(a1 + 384, v8, 0x10u, (unsigned __int8 *)v41, (unsigned __int8 *)&v42);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v11 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v12 = v11 * sub_D22E60(*(_QWORD *)(a1 + 560));
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v12;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v14 = sub_D23370(*(_QWORD *)(a1 + 560));
        v15 = *(_QWORD *)(a1 + 560);
        v42.m128i_i16[0] = v14;
        v41[0].m128i_i16[0] = sub_D23370(v15);
        v3 = sub_D6F5B0(a1 + 384, v13, 0x20u, (unsigned __int16 *)v41, (unsigned __int16 *)&v42);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v16 = sub_D23A90(*(_QWORD *)(a1 + 560));
        v17 = sub_D23A90(*(_QWORD *)(a1 + 560)) * v16;
        *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v17;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v19 = sub_D23BA0(*(_QWORD *)(a1 + 560));
        v20 = *(_QWORD *)(a1 + 560);
        v42.m128i_i32[0] = v19;
        v41[0].m128i_i32[0] = sub_D23BA0(v20);
        v3 = sub_D70020(a1 + 384, v18, 0x40u, v41[0].m128i_i32, (unsigned int *)&v42);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v21 = sub_D242B0(*(_QWORD *)(a1 + 560));
        v22 = sub_D242B0(*(_QWORD *)(a1 + 560)) * v21;
        *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v22;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v23 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v24 = sub_D243C0(*(_QWORD *)(a1 + 560));
        v25 = *(_QWORD *)(a1 + 560);
        v42.m128i_i64[0] = v24;
        v41[0].m128i_i64[0] = sub_D243C0(v25);
        v3 = sub_D70D00(a1 + 384, v23, 0x80u, v41[0].m128i_i64, (void **)&v42);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v26 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v27 = sub_D24B00(*(_QWORD *)(a1 + 560)) * v26;
        *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v27;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v29.m128i_i64[0] = sub_D25090(*(_QWORD *)(a1 + 560));
        v30 = *(_QWORD *)(a1 + 560);
        v42 = v29;
        v41[0].m128i_i64[0] = sub_D25090(v30);
        v41[0].m128i_i64[1] = v31;
        v3 = sub_D59790(a1 + 384, v28, (unsigned int)(2 * v42.m128i_i32[2]), v41, &v42, v32);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v34.m128i_i64[0] = sub_D251C0(*(_QWORD *)(a1 + 560));
        v35 = *(_QWORD *)(a1 + 560);
        v42 = v34;
        v41[0].m128i_i64[0] = sub_D251C0(v35);
        v41[0].m128i_i64[1] = v36;
        v3 = sub_D5B020(a1 + 384, v33, (unsigned int)(2 * v42.m128i_i32[2]), v41, &v42, v37);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v38 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v39 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v40 = *(_QWORD *)(a1 + 560);
        if ( !v39 )
          v38 = 0;
        *(_BYTE *)sub_E216C0(v40, 8) = v38;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 560);
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v42, v6);
        sub_D0AF80((__int64)v41, *(_QWORD *)(a1 + 560));
        v3 = sub_D39E40(a1 + 384, v7, 2 * (unsigned int)v43, (__int64)v41, (__int64)&v42);
        if ( v41[0].m128i_i32[2] > 0x40u && v41[0].m128i_i64[0] )
          operator delete[]((void *)v41[0].m128i_i64[0]);
        if ( v42.m128i_i32[2] > 0x40u && v42.m128i_i64[0] )
          operator delete[]((void *)v42.m128i_i64[0]);
      }
      break;
  }
  return v3;
}
