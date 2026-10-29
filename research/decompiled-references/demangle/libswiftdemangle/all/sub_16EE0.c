__int64 __fastcall sub_16EE0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int16 v6; // si
  int v7; // eax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  int v26; // edx
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 *v29; // rbx
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h] BYREF
  __int64 v37; // [rsp+18h] [rbp-50h] BYREF
  __int64 v38; // [rsp+20h] [rbp-48h] BYREF
  __int64 v39; // [rsp+28h] [rbp-40h]
  unsigned __int64 v40; // [rsp+38h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 64) <= v1 )
    return 0;
  *(_QWORD *)(a1 + 72) = v1 + 1;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1) )
  {
    case 'O':
      v5 = sub_132E0(a1);
      v6 = 297;
      return sub_CD20((_QWORD *)a1, v6, v5);
    case 'P':
      return sub_EA70(a1);
    case 'R':
      v7 = sub_D180((_QWORD *)a1);
      v8 = v7;
      if ( v7 < 0 )
        return 0;
      v9 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v9 + 16) = 331;
      *(_BYTE *)(v9 + 18) = 2;
      *(_QWORD *)v9 = v8;
      v5 = sub_CD20((_QWORD *)a1, 296, v9);
      goto LABEL_14;
    case 'S':
      return sub_16320(a1);
    case 'X':
      v10 = 0;
      goto LABEL_17;
    case 'Y':
      v11 = sub_14640((_QWORD *)a1);
      goto LABEL_20;
    case 'Z':
      v11 = sub_10120((_QWORD *)a1, 0, 0);
LABEL_20:
      v10 = v11;
LABEL_17:
      result = sub_FBF0(a1, v10);
      v38 = result;
      if ( !result )
        return result;
      goto LABEL_8;
    case 'a':
      sub_BBE0(a1, 98);
      v12 = sub_E0A0(a1);
      v14 = sub_CE00((_QWORD *)a1, 5, v12, v13);
      result = sub_CD20((_QWORD *)a1, 221, v14);
      v38 = result;
      if ( !result )
        return result;
      goto LABEL_8;
    case 'e':
      v15 = sub_E0A0(a1);
      v16 = sub_D180((_QWORD *)a1);
      v17 = v16;
      if ( v16 < 0 )
        return 0;
      v18 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v18 + 16) = 220;
      *(_BYTE *)(v18 + 18) = 2;
      *(_QWORD *)v18 = v17;
      v5 = sub_CE00((_QWORD *)a1, 219, v15, v18);
      goto LABEL_14;
    case 'o':
      v38 = 0;
      v39 = 0;
      v19 = sub_D180((_QWORD *)a1);
      if ( !(unsigned __int8)sub_F1A0(a1, (__int64)&v38, (unsigned __int64 *)&v36) )
        return 0;
      v20 = *(_DWORD *)(a1 + 96);
      if ( !v20 )
        return 0;
      v21 = (unsigned int)(v20 - 1);
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v21);
      *(_DWORD *)(a1 + 96) = v21;
      if ( !v22 )
        return 0;
      v23 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v23 + 16) = 99;
      *(_BYTE *)(v23 + 18) = 2;
      *(_QWORD *)v23 = v19;
      v24 = sub_CE00((_QWORD *)a1, 288, v22, v23);
      v25 = sub_12C70((_QWORD *)a1, 1);
      v26 = v39;
      *(_WORD *)(v25 + 16) = 224;
      v27 = v25;
      *(_BYTE *)(v25 + 18) = 0;
      if ( v26 )
      {
        v28 = v38;
        v29 = (__int64 *)(v38 + 8LL * (unsigned int)(v26 - 1));
        do
        {
          sub_C080(v27, *v29, (_QWORD *)a1);
          v30 = v29--;
        }
        while ( (__int64 *)v28 != v30 );
      }
      sub_C080(v24, v27, (_QWORD *)a1);
      if ( v36 )
        sub_C080(v24, v36, (_QWORD *)a1);
      result = sub_CD20((_QWORD *)a1, 221, v24);
      v37 = result;
      if ( result )
      {
        v35 = result;
        sub_11EC0(a1 + 104, &v37, (_QWORD *)a1);
        return v35;
      }
      return result;
    case 'p':
      sub_E0A0(a1);
      v31 = sub_E0A0(a1);
      v5 = sub_CE00((_QWORD *)a1, 218, v31, v32);
      goto LABEL_14;
    case 'r':
      v33 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v33 + 16) = 296;
      v5 = v33;
      *(_BYTE *)(v33 + 18) = 0;
LABEL_14:
      v6 = 221;
      return sub_CD20((_QWORD *)a1, v6, v5);
    case 'x':
      v4 = 0;
      goto LABEL_7;
    case 'y':
      v3 = sub_14640((_QWORD *)a1);
      goto LABEL_6;
    case 'z':
      v3 = sub_10120((_QWORD *)a1, 0, 0);
LABEL_6:
      v4 = v3;
LABEL_7:
      result = sub_FF80(a1, v4);
      v38 = result;
      if ( result )
      {
LABEL_8:
        v34 = result;
        sub_11EC0(a1 + 104, &v38, (_QWORD *)a1);
        result = v34;
      }
      break;
    default:
      return 0;
  }
  return result;
}
