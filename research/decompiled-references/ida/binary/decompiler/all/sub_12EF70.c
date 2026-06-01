__int64 __fastcall sub_12EF70(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r15d
  char v15; // al
  __int64 v16; // rax
  __int16 v17; // si
  __int16 v18; // cx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r13d
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v10 = *(_BYTE *)a4 == 1;
  v29 = __readfsqword(0x28u);
  v11 = a7;
  if ( v10 && *(_DWORD *)(a4 + 8) >= *(_DWORD *)(a1 + 68) )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    v25 = a6;
    v15 = sub_119750((unsigned __int8 *)a4);
    a6 = v25;
    v11 = a7;
    if ( v25 != v15 )
    {
LABEL_4:
      v12 = *(_DWORD *)(a4 + 4);
      v13 = a5 - v12;
      if ( (int)(a5 - v12) > 0 )
      {
        switch ( *(_BYTE *)a4 )
        {
          case 0:
            goto LABEL_19;
          case 1:
            v26 = v11;
            v23 = *(_DWORD *)(a4 + 8) + v12 - a5;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v23, a5) )
              return 0;
            *(_DWORD *)(a4 + 8) = v23;
            if ( (unsigned __int8)sub_128630(a4, a1, a5, v26) )
              return 1;
            *(_DWORD *)(a4 + 8) += v13;
            break;
          case 4:
            goto LABEL_11;
          case 5:
          case 9:
            v21 = *(_QWORD *)(a4 + 8);
            v22 = *(_QWORD *)(v21 + 8);
            if ( v22 < v13 )
              return 0;
            *(_QWORD *)(v21 + 8) = v22 - v13;
            if ( (unsigned __int8)sub_128630(a4, a1, a5, v11) )
              return 1;
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL) += v13;
            break;
          case 6:
            v24 = *(_QWORD *)(a4 + 8);
            if ( v24 < v13 )
              return 0;
            *(_QWORD *)(a4 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL) & (v24 - v13);
            if ( (unsigned __int8)sub_128630(a4, a1, a5, v11) )
              return 1;
            *(_QWORD *)(a4 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL)
                                & (*(_QWORD *)(a4 + 8) + v13);
            break;
          default:
            return 0;
        }
      }
      return 0;
    }
  }
  else if ( a6 )
  {
    goto LABEL_4;
  }
  if ( *(_BYTE *)a4 != 4 )
    return sub_128630(a4, a1, a5, v11);
  if ( (int)(a5 - *(_DWORD *)(a4 + 4)) <= 0 )
    return 0;
LABEL_11:
  if ( !(unsigned __int8)sub_12EAE0(a1, a2, *(_QWORD *)(a4 + 8), a5, a3, a6, v11, 0) )
    return 0;
  v16 = *(_QWORD *)(a4 + 8);
  if ( *(_DWORD *)v16 == 4 )
  {
    if ( a4 )
    {
      v28 = 0;
      sub_121540((__int64)&v27, (unsigned __int8 *)(v16 + 32));
      v17 = *(_WORD *)a4;
      v18 = *(_WORD *)(a4 + 2);
      v19 = *(_DWORD *)(a4 + 4);
      *(_QWORD *)a4 = v27;
      v20 = *(_QWORD *)(a4 + 8);
      LOWORD(v27) = v17;
      *(_QWORD *)(a4 + 8) = v28;
      WORD1(v27) = v18;
      HIDWORD(v27) = v19;
      v28 = v20;
      sub_11A960((__int64)&v27);
    }
  }
  else
  {
LABEL_19:
    *(_DWORD *)(a4 + 4) = a5;
    *(_WORD *)(a4 + 2) = 0;
  }
  return 1;
}
