__int64 __fastcall sub_1292D0(__int16 *a1, __int64 a2, char a3)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edx
  __int64 v13; // rax
  __int16 v14; // si
  __int16 v15; // cx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v4 = *((_DWORD *)a1 + 1);
  v5 = *(_QWORD *)(a2 + 96);
  v20 = __readfsqword(0x28u);
  if ( !a3 )
    v4 = -v4;
  if ( *(_BYTE *)(v5 + 145) && sub_118150((unsigned __int8 *)a1) )
    v4 = -v4;
  switch ( *(_BYTE *)a1 )
  {
    case 0:
    case 7:
      goto LABEL_9;
    case 1:
      v11 = *((_DWORD *)a1 + 2);
      if ( v4 <= 0 )
      {
        v11 += v4;
        if ( v11 <= 7 )
        {
          if ( v4 )
            return 0;
        }
      }
      v12 = 2 * *((_DWORD *)a1 + 1);
      if ( v12 <= 0xFFFF - v11
        && v12 + v11 - 1 >= *(_DWORD *)(a2 + 68) == *(_DWORD *)(a2 + 68) <= v11
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2) )
      {
        *((_DWORD *)a1 + 2) += v4;
        goto LABEL_9;
      }
      return 0;
    case 4:
      if ( !(unsigned __int8)sub_129190(*((_QWORD *)a1 + 1), a2, a3) )
        return 0;
      v13 = *((_QWORD *)a1 + 1);
      if ( *(_DWORD *)v13 == 4 && a1 )
      {
        v19 = 0;
        sub_120000((__int64)&v18, (unsigned __int8 *)(v13 + 32));
        v14 = *a1;
        v15 = a1[1];
        v16 = *((_DWORD *)a1 + 1);
        *(_QWORD *)a1 = v18;
        v17 = *((_QWORD *)a1 + 1);
        LOWORD(v18) = v14;
        *((_QWORD *)a1 + 1) = v19;
        WORD1(v18) = v15;
        HIDWORD(v18) = v16;
        v19 = v17;
        sub_119360((__int64)&v18);
      }
      goto LABEL_9;
    case 5:
      v7 = *((_QWORD *)a1 + 1);
      if ( v4 < 0 && *(_QWORD *)(v7 + 8) < -v4 )
        return 0;
      *(_QWORD *)(v7 + 8) += v4;
      goto LABEL_9;
    case 6:
      v9 = *((_QWORD *)a1 + 1);
      if ( v4 < 0 )
      {
        if ( v9 >= -v4 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) & (v9 + v4);
          goto LABEL_15;
        }
        return 0;
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) & (v9 + v4);
      if ( v4 && v10 < v9 )
        return 0;
LABEL_15:
      *((_QWORD *)a1 + 1) = v10;
LABEL_9:
      a1[1] = 0;
      return 1;
    default:
      return 0;
  }
}
