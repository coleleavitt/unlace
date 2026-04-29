__int64 __fastcall sub_1298B0(
        __int64 a1,
        __int64 *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r10d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  char v25; // al
  char v26; // al
  __int64 v28; // [rsp+18h] [rbp-68h] BYREF
  __int64 v29; // [rsp+20h] [rbp-60h]
  __int64 v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h]
  unsigned __int64 v32; // [rsp+40h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_129610(a1, a2, a3, a4, a5, a6, (char *)a7) )
  {
    v28 = -1;
    v29 = 0;
    v30 = -1;
    v31 = 0;
    v15 = sub_11B2F0((char *)a5, (__int64)&v28, v10, v11, v12);
    v13 = 0;
    if ( v15 && (v19 = sub_11B2F0((char *)a7, (__int64)&v30, v16, v17, v18), v13 = 0, v19) )
    {
      if ( (_BYTE)v29 != (_BYTE)v31 )
        return v13;
      if ( !a2 )
        return 1;
      v20 = v30 - v28;
    }
    else
    {
      if ( *(_BYTE *)a5 != *(_BYTE *)a7 )
        return v13;
      switch ( *(_BYTE *)a5 )
      {
        case 0:
          goto LABEL_25;
        case 1:
        case 5:
          if ( !under_debugger )
            sub_37B760(52921);
          BUG();
        case 4:
          v23 = *(_DWORD **)(a5 + 8);
          if ( *v23 != 2 )
            return v13;
          v24 = *(_DWORD **)(a7 + 8);
          if ( *v24 != 2 )
            return v13;
          v25 = sub_1283C0(a1, a3, a4, (__int64)(v23 + 8), a6, (__int64)(v24 + 8), 0);
          v13 = 0;
          if ( !v25 )
            return v13;
          if ( (unsigned __int8)sub_129610(
                                  a1,
                                  a2,
                                  a3,
                                  a4,
                                  *(_QWORD *)(a5 + 8) + 48LL,
                                  a6,
                                  (char *)(*(_QWORD *)(a7 + 8) + 48LL)) )
            return 1;
          v26 = sub_1283C0(a1, a3, a4, *(_QWORD *)(a5 + 8) + 48LL, a6, *(_QWORD *)(a7 + 8) + 48LL, 0);
          v13 = 0;
          if ( !v26 )
            return v13;
LABEL_25:
          v20 = 0;
LABEL_16:
          if ( !a2 )
            return 1;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 24LL) != 8 )
            v20 = (int)v20;
          break;
        case 6:
          v20 = *(_QWORD *)(a7 + 8) - *(_QWORD *)(a5 + 8);
          goto LABEL_16;
        case 9:
          v21 = *(_QWORD *)(a5 + 8);
          v22 = *(_QWORD *)(a7 + 8);
          if ( *(_DWORD *)(v21 + 16) != *(_DWORD *)(v22 + 16) )
            return v13;
          v20 = *(_QWORD *)(v22 + 8) - *(_QWORD *)(v21 + 8);
          goto LABEL_16;
        default:
          return v13;
      }
    }
    *a2 = v20;
  }
  return 1;
}
