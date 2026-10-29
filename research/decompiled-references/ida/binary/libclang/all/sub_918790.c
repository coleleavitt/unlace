__int64 __fastcall sub_918790(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  char v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rbp
  char v10; // r13
  __int64 v11; // rbp
  __int16 v12; // r13
  __int64 v13; // rbp
  __int16 v14; // r13
  __int64 v15; // rbp
  int v16; // r13d
  __int64 v17; // rbp
  int v18; // r13d
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbp
  char v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbp
  __m128i *v36; // rax
  __int8 v37; // dl
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __int8 v39; // [rsp+10h] [rbp-78h]
  __int64 v40[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h]
  int v42; // [rsp+40h] [rbp-48h]
  int v43; // [rsp+50h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v7 = sub_915550(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v6, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 )
        {
          if ( v42 )
          {
            sub_A1DB00(v40);
            sub_A1C490(v40);
          }
        }
        *(_BYTE *)sub_8F63E0(v40) = v7;
      }
      goto LABEL_73;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v9 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v10 = sub_915900(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v9, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_BYTE *)sub_8F6BD0(v40) = v10;
      }
      goto LABEL_73;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v12 = sub_915930(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v11, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_WORD *)sub_8F6C20(v40) = v12;
      }
      goto LABEL_73;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v13 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v14 = sub_915CE0(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v13, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_WORD *)sub_8F7430(v40) = v14;
      }
      goto LABEL_73;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v15 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v16 = sub_915D10(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v15, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_DWORD *)sub_8F7480(v40) = v16;
      }
      goto LABEL_73;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v18 = sub_9160C0(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v17, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_DWORD *)sub_8F7C70(v40) = v18;
      }
      goto LABEL_73;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v19 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v20 = sub_9160F0(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v19, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_QWORD *)sub_8F7CC0(v40) = v20;
      }
      goto LABEL_73;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v21 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v22 = sub_9164A0(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v21, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_QWORD *)sub_8F84D0(v40) = v22;
      }
      goto LABEL_73;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v23 = *(_QWORD *)(a1 + 792);
      v24 = a1 + 384;
      *(_QWORD *)(v24 + 416) = *a3;
      return sub_913E70(v24, v23);
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v25 = *(_QWORD *)(a1 + 792);
      v26 = a1 + 384;
      *(_QWORD *)(v26 + 416) = *a3;
      return sub_913FF0(v26, v25);
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v27 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v28 = sub_8F4170(*(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v27, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        *(_BYTE *)sub_8F9850(v40) = v28;
      }
      goto LABEL_73;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v29 = *(_QWORD *)(a1 + 792);
      v30 = a1 + 384;
      *(_QWORD *)(v30 + 416) = *a3;
      return sub_9142A0(v30, v29);
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v31 = *(_QWORD *)(a1 + 792);
      v32 = a1 + 384;
      *(_QWORD *)(v32 + 416) = *a3;
      return sub_9148A0(v32, v31);
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v33 = *(_QWORD *)(a1 + 792);
      v34 = a1 + 384;
      *(_QWORD *)(v34 + 416) = *a3;
      return sub_914450(v34, v33);
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v35 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5130(&v38, *(_QWORD *)(a1 + 568));
      sub_8F41A0((__int64)v40, *(_QWORD *)(a1 + 568));
      v8 = sub_9E26A0(a1 + 384, v35, v40);
      if ( (_BYTE)v8 )
      {
        if ( !v43 && v41 && v42 )
        {
          sub_A1DB00(v40);
          sub_A1C490(v40);
        }
        v36 = (__m128i *)sub_8FA040(v40);
        v37 = v39;
        *v36 = _mm_load_si128(&v38);
        v36[1].m128i_i8[0] = v37;
      }
LABEL_73:
      sub_A1C0C0(v40);
      result = v8;
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = *(_QWORD *)(a1 + 792);
        v5 = a1 + 384;
        *(_QWORD *)(v5 + 416) = *a3;
        result = sub_914720(v5, v4);
      }
      else
      {
LABEL_3:
        result = 1;
      }
      break;
  }
  return result;
}

