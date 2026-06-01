__int64 __fastcall sub_934D20(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r13
  _BYTE *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r13
  _WORD *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // r13
  _DWORD *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // r13
  _QWORD *v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rbp
  __int64 v38; // rsi
  __int64 v39[13]; // [rsp+0h] [rbp-68h] BYREF

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v8 = *(_QWORD *)(a1 + 792);
      v9 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v9);
      v7 = sub_9E4580(a1 + 384, v8, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_920420(a1 + 384, v8, (__int64)v39);
      goto LABEL_39;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v10 = *(_QWORD *)(a1 + 792);
      v11 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v11);
      v7 = sub_9E4580(a1 + 384, v10, v39, 4);
      if ( (_BYTE)v7 )
      {
        v12 = *(_QWORD *)(a1 + 568);
        v13 = (_BYTE *)sub_8F6BD0(v39);
        *(_BYTE *)sub_A1A4E0(v12, 8) = *v13;
        *(_BYTE *)sub_8F6BD0(v39) = *v13 - 1;
      }
      goto LABEL_39;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v14 = *(_QWORD *)(a1 + 792);
      v15 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v15);
      v7 = sub_9E4580(a1 + 384, v14, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_920740(a1 + 384, v14, (__int64)v39);
      goto LABEL_39;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v16 = *(_QWORD *)(a1 + 792);
      v17 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v17);
      v7 = sub_9E4580(a1 + 384, v16, v39, 4);
      if ( (_BYTE)v7 )
      {
        v18 = *(_QWORD *)(a1 + 568);
        v19 = (_WORD *)sub_8F7430(v39);
        *(_WORD *)sub_A1A4E0(v18, 8) = *v19;
        *(_WORD *)sub_8F7430(v39) = *v19 - 1;
      }
      goto LABEL_39;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v20 = *(_QWORD *)(a1 + 792);
      v21 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v21);
      v7 = sub_9E4580(a1 + 384, v20, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_920A60(a1 + 384, v20, (__int64)v39);
      goto LABEL_39;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v22 = *(_QWORD *)(a1 + 792);
      v23 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v23);
      v7 = sub_9E4580(a1 + 384, v22, v39, 4);
      if ( (_BYTE)v7 )
      {
        v24 = *(_QWORD *)(a1 + 568);
        v25 = (_DWORD *)sub_8F7C70(v39);
        *(_DWORD *)sub_A1A4E0(v24, 8) = *v25;
        *(_DWORD *)sub_8F7C70(v39) = *v25 - 1;
      }
      goto LABEL_39;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v26 = *(_QWORD *)(a1 + 792);
      v27 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v27);
      v7 = sub_9E4580(a1 + 384, v26, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_920D70(a1 + 384, v26, (__int64)v39);
      goto LABEL_39;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v28 = *(_QWORD *)(a1 + 792);
      v29 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v29);
      v7 = sub_9E4580(a1 + 384, v28, v39, 4);
      if ( (_BYTE)v7 )
      {
        v30 = *(_QWORD *)(a1 + 568);
        v31 = (_QWORD *)sub_8F84D0(v39);
        *(_QWORD *)sub_A1A4E0(v30, 8) = *v31;
        *(_QWORD *)sub_8F84D0(v39) = *v31 - 1LL;
      }
      goto LABEL_39;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v32 = *(_QWORD *)(a1 + 792);
      v33 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v33);
      v7 = sub_9E4580(a1 + 384, v32, v39, 4);
      if ( (_BYTE)v7 )
        sub_8E5DC0(*(_QWORD *)(a1 + 568), (__int64)v39);
      goto LABEL_39;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v34 = *(_QWORD *)(a1 + 792);
      v35 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v35);
      v7 = sub_9E4580(a1 + 384, v34, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_934810(a1 + 384, v34, v39);
      goto LABEL_39;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v36 = *(_QWORD *)(a1 + 792);
        v37 = a1 + 384;
        v38 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F41A0((__int64)v39, v38);
        if ( (unsigned __int8)sub_9E4580(a1 + 384, v36, v39, 4) )
        {
          if ( (*(_BYTE *)(sub_A2CB40(v37) + 1) & 0x20) != 0 )
          {
            sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
            JUMPOUT(0x5368FE);
          }
          sub_8E5370(v37, v36);
        }
        v3 = 0;
        sub_A1C0C0(v39);
      }
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 792);
      v6 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v39, v6);
      v7 = sub_9E4580(a1 + 384, v5, v39, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921090((_QWORD *)(a1 + 384), v5, (__int64)v39);
LABEL_39:
      sub_A1C0C0(v39);
      return v7;
  }
}

