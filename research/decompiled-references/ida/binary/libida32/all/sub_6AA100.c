__int64 __fastcall sub_6AA100(__int64 *a1, int a2, __int64 a3)
{
  _QWORD *v4; // rdi
  int v6; // eax
  __int64 v7; // rsi
  int i; // eax
  __int64 v9; // rsi
  unsigned int j; // r15d
  int v11; // eax
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  int v14; // eax
  unsigned int v15; // r13d
  int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  __int64 v21; // rsi
  unsigned __int8 v22; // bp
  int v23; // eax
  __int64 v24; // rsi
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  __int64 result; // rax
  int v30; // eax
  __int64 v31; // rsi
  _QWORD *v32; // [rsp+8h] [rbp-60h]
  unsigned int v33; // [rsp+14h] [rbp-54h]
  unsigned int v34; // [rsp+18h] [rbp-50h]
  int v36; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD **)(*a1 + 1480);
  v37 = __readfsqword(0x28u);
  v6 = sub_3B90A0(v4, a2);
  v7 = *a1;
  v36 = v6;
  v34 = sub_79B7E0(&v36, v7, 109);
  for ( i = sub_6A9DD0(a1, a2, v34); ; i = sub_6A9DD0(a1, a2, v34) )
  {
    v9 = *a1;
    v36 = i;
    for ( j = sub_79B7E0(&v36, v9, 69); ; j = sub_79B840(&v36, v17, j, 69) )
    {
      v11 = sub_6A9DD0(a1, a2, v34);
      v12 = *a1;
      v36 = v11;
      v13 = *(_QWORD **)(v12 + 1480);
      v14 = sub_79B3A0(&v36, v12, j, 69);
      v15 = sub_3B9110(v13, v14 - 1);
      if ( v15 != -1 )
      {
        v18 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), v15);
        v19 = *a1;
        v36 = v18;
        v20 = sub_79B3A0(&v36, v19, 4294967289LL, 65);
        v21 = v15;
        v22 = v20;
        while ( (_DWORD)v21 != -1 )
        {
          result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a3 + 16LL))(a3, v21, j);
          if ( (_DWORD)result )
            return result;
          v23 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), v15);
          v24 = *a1;
          v36 = v23;
          v25 = sub_79B840(&v36, v24, v22, 115);
          if ( v25 > 0xFF )
            break;
          v33 = v25;
          v22 = v25;
          v32 = *(_QWORD **)(*a1 + 1480);
          v26 = sub_3B90A0(v32, v15);
          v27 = *a1;
          v36 = v26;
          v28 = sub_79B3A0(&v36, v27, v33, 115);
          v21 = (unsigned int)sub_3B9110(v32, v28 - 1);
        }
      }
      if ( j == -1 )
        break;
      v16 = sub_6A9DD0(a1, a2, v34);
      v17 = *a1;
      v36 = v16;
    }
    if ( v34 == -1 )
      break;
    v30 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
    v31 = *a1;
    v36 = v30;
    v34 = sub_79B840(&v36, v31, v34, 109);
  }
  return 0;
}

