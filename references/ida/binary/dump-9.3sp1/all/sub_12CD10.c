__int64 __fastcall sub_12CD10(__int16 *a1, unsigned __int64 *a2, char a3)
{
  int v4; // ebp
  unsigned __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int16 v16; // si
  __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v4 = *((_DWORD *)a1 + 1);
  v5 = a2[12];
  v22 = __readfsqword(0x28u);
  if ( !a3 )
    v4 = -v4;
  if ( *(_BYTE *)(v5 + 145) && sub_11BB90((unsigned __int8 *)a1) )
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
        && v12 + v11 - 1 >= *((_DWORD *)a2 + 17) == *((_DWORD *)a2 + 17) <= v11
        && (*(unsigned __int8 (__fastcall **)(unsigned __int64 *))(*a2 + 88))(a2) )
      {
        *((_DWORD *)a1 + 2) += v4;
        goto LABEL_9;
      }
      return 0;
    case 4:
      if ( !(unsigned __int8)sub_12CBD0(*((_QWORD *)a1 + 1), a2, a3) )
        return 0;
      v15 = *((_QWORD *)a1 + 1);
      if ( *(_DWORD *)v15 == 4 && a1 )
      {
        v21 = 0;
        sub_123A40((__int64)&v20, (unsigned __int8 *)(v15 + 32), v13, v14);
        v16 = *a1;
        v17 = a1[1];
        v18 = *((_DWORD *)a1 + 1);
        *(_QWORD *)a1 = v20;
        v19 = *((_QWORD *)a1 + 1);
        LOWORD(v20) = v16;
        *((_QWORD *)a1 + 1) = v21;
        WORD1(v20) = v17;
        HIDWORD(v20) = v18;
        v21 = v19;
        sub_11CDA0((__int64)&v20);
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
          v10 = *(_QWORD *)(*(_QWORD *)(a2[12] + 24) + 16LL) & (v9 + v4);
          goto LABEL_15;
        }
        return 0;
      }
      v10 = *(_QWORD *)(*(_QWORD *)(a2[12] + 24) + 16LL) & (v9 + v4);
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
