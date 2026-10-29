__int64 __fastcall sub_92FC50(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rsi
  _BYTE *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rsi
  _WORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34[13]; // [rsp+0h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v7 = *(_QWORD *)(a1 + 792);
      v8 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v8);
      v6 = sub_9E4580(a1 + 384, v7, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_923500(a1 + 384, v7, (__int64)v34);
      goto LABEL_37;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v9 = *(_QWORD *)(a1 + 792);
      v10 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v10);
      v6 = sub_9E4580(a1 + 384, v9, v34, 3);
      if ( (_BYTE)v6 )
      {
        v11 = (_BYTE *)sub_8F6BD0(v34);
        ++*v11;
      }
      goto LABEL_37;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 792);
      v13 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v13);
      v6 = sub_9E4580(a1 + 384, v12, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_923800(a1 + 384, v12, (__int64)v34);
      goto LABEL_37;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v14 = *(_QWORD *)(a1 + 792);
      v15 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v15);
      v6 = sub_9E4580(a1 + 384, v14, v34, 3);
      if ( (_BYTE)v6 )
      {
        v16 = (_WORD *)sub_8F7430(v34);
        ++*v16;
      }
      goto LABEL_37;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v17 = *(_QWORD *)(a1 + 792);
      v18 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v18);
      v6 = sub_9E4580(a1 + 384, v17, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_923B00(a1 + 384, v17, (__int64)v34);
      goto LABEL_37;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v19 = *(_QWORD *)(a1 + 792);
      v20 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v20);
      v6 = sub_9E4580(a1 + 384, v19, v34, 3);
      if ( (_BYTE)v6 )
      {
        v21 = (_DWORD *)sub_8F7C70(v34);
        ++*v21;
      }
      goto LABEL_37;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v22 = *(_QWORD *)(a1 + 792);
      v23 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v23);
      v6 = sub_9E4580(a1 + 384, v22, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_923DF0(a1 + 384, v22, (__int64)v34);
      goto LABEL_37;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v24 = *(_QWORD *)(a1 + 792);
      v25 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v25);
      v6 = sub_9E4580(a1 + 384, v24, v34, 3);
      if ( (_BYTE)v6 )
      {
        v26 = (_QWORD *)sub_8F84D0(v34);
        ++*v26;
      }
      goto LABEL_37;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v27 = *(_QWORD *)(a1 + 792);
      v28 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v28);
      v6 = sub_9E4580(a1 + 384, v27, v34, 3);
      if ( (_BYTE)v6 )
        sub_8E5600((__int64)v34);
      goto LABEL_37;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v29 = *(_QWORD *)(a1 + 792);
      v30 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v30);
      v6 = sub_9E4580(a1 + 384, v29, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_92F780(a1 + 384, v29, v34);
      goto LABEL_37;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v31 = *(_QWORD *)(a1 + 792);
      v32 = a1 + 384;
      v33 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v33);
      v6 = sub_9E4580(a1 + 384, v31, v34, 3);
      if ( (_BYTE)v6 )
      {
        if ( (*(_BYTE *)(sub_A2CB40(v32) + 1) & 0x20) != 0 )
        {
          *(_BYTE *)sub_8F9850(v34) = 1;
        }
        else
        {
          v6 = 0;
          sub_8E5370(v32, v31);
        }
      }
      goto LABEL_37;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v4 = *(_QWORD *)(a1 + 792);
      v5 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v34, v5);
      v6 = sub_9E4580(a1 + 384, v4, v34, 3);
      if ( (_BYTE)v6 )
        v6 = sub_9240F0(a1 + 384, v4, (__int64)v34);
LABEL_37:
      sub_A1C0C0(v34);
      return v6;
  }
}

