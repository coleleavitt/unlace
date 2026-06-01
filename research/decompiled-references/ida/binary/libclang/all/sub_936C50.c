__int64 __fastcall sub_936C50(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rsi
  _BYTE *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rsi
  _WORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35[13]; // [rsp+0h] [rbp-68h] BYREF

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v8 = *(_QWORD *)(a1 + 792);
      v9 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v9);
      v7 = sub_9E4580(a1 + 384, v8, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921400(a1 + 384, v8, (__int64)v35);
      goto LABEL_37;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v10 = *(_QWORD *)(a1 + 792);
      v11 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v11);
      v7 = sub_9E4580(a1 + 384, v10, v35, 4);
      if ( (_BYTE)v7 )
      {
        v12 = (_BYTE *)sub_8F6BD0(v35);
        --*v12;
      }
      goto LABEL_37;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v13 = *(_QWORD *)(a1 + 792);
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v14);
      v7 = sub_9E4580(a1 + 384, v13, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921700(a1 + 384, v13, (__int64)v35);
      goto LABEL_37;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v15 = *(_QWORD *)(a1 + 792);
      v16 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v16);
      v7 = sub_9E4580(a1 + 384, v15, v35, 4);
      if ( (_BYTE)v7 )
      {
        v17 = (_WORD *)sub_8F7430(v35);
        --*v17;
      }
      goto LABEL_37;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v18 = *(_QWORD *)(a1 + 792);
      v19 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v19);
      v7 = sub_9E4580(a1 + 384, v18, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921A00(a1 + 384, v18, (__int64)v35);
      goto LABEL_37;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v20 = *(_QWORD *)(a1 + 792);
      v21 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v21);
      v7 = sub_9E4580(a1 + 384, v20, v35, 4);
      if ( (_BYTE)v7 )
      {
        v22 = (_DWORD *)sub_8F7C70(v35);
        --*v22;
      }
      goto LABEL_37;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v23 = *(_QWORD *)(a1 + 792);
      v24 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v24);
      v7 = sub_9E4580(a1 + 384, v23, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921CF0(a1 + 384, v23, (__int64)v35);
      goto LABEL_37;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v25 = *(_QWORD *)(a1 + 792);
      v26 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v26);
      v7 = sub_9E4580(a1 + 384, v25, v35, 4);
      if ( (_BYTE)v7 )
      {
        v27 = (_QWORD *)sub_8F84D0(v35);
        --*v27;
      }
      goto LABEL_37;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v28 = *(_QWORD *)(a1 + 792);
      v29 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v29);
      v7 = sub_9E4580(a1 + 384, v28, v35, 4);
      if ( (_BYTE)v7 )
        sub_8E5880((__int64)v35);
      goto LABEL_37;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v30 = *(_QWORD *)(a1 + 792);
      v31 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v31);
      v7 = sub_9E4580(a1 + 384, v30, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_936780(a1 + 384, v30, v35);
      goto LABEL_37;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v32 = *(_QWORD *)(a1 + 792);
        v33 = a1 + 384;
        v34 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F41A0((__int64)v35, v34);
        if ( (unsigned __int8)sub_9E4580(a1 + 384, v32, v35, 4) )
        {
          sub_A2CB40(v33);
          sub_8E5370(v33, v32);
        }
        v3 = 0;
        sub_A1C0C0(v35);
      }
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 792);
      v6 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v35, v6);
      v7 = sub_9E4580(a1 + 384, v5, v35, 4);
      if ( (_BYTE)v7 )
        v7 = sub_921FF0(a1 + 384, v5, (__int64)v35);
LABEL_37:
      sub_A1C0C0(v35);
      return v7;
  }
}

