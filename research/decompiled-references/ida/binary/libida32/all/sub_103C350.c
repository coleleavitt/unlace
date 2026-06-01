__int64 __fastcall sub_103C350(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // rbp
  __int32 v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD v13[2]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a2;
  sub_103BB70(a1, a2, a3);
  *(_BYTE *)(a1 + 273) = 0;
  *(_QWORD *)a1 = &off_2BFDAF0;
  v5 = a2[2].m128i_i32[3];
  if ( (v5 & 0xFFFFFFF7) == 1 )
  {
    a2 = (const __m128i *)(byte_9 + 1);
    *(_BYTE *)(a1 + 273) = sub_22941F0(v3, 10, 7, 0) ^ 1;
    goto LABEL_3;
  }
  switch ( v5 )
  {
    case 5:
    case 27:
      if ( (unsigned __int8)sub_2294160(a2) )
      {
        v13[0] = 8;
      }
      else
      {
        if ( !(unsigned __int8)sub_2294180(a2) )
          break;
        if ( a2[3].m128i_i32[0] == 31 )
          v13[0] = 10;
        else
          v13[0] = 9;
      }
LABEL_15:
      v13[1] = 0;
      v11 = sub_2293DC0(a2);
      a2 = (const __m128i *)v13;
      v14[0] = v11;
      v14[1] = v12;
      *(_BYTE *)(a1 + 273) = sub_9E60E0((unsigned int *)v14, (unsigned int *)v13) ^ 1;
      break;
    case 28:
      if ( a2[3].m128i_i32[0] == 31 )
        v13[0] = 3;
      else
        v13[0] = 2;
      goto LABEL_15;
    case 31:
      *(_BYTE *)(a1 + 273) = 1;
      break;
  }
LABEL_3:
  *(_DWORD *)(a1 + 168) = 9;
  *(_QWORD *)(a1 + 328) = &unk_22D6A7B;
  v6 = a1 + 216;
  *(_QWORD *)a1 = &off_2BFF6A0;
  if ( (unsigned __int8)sub_2294180(a1 + 216) )
    *(_DWORD *)(a1 + 140) = 9;
  *(_DWORD *)(a1 + 152) = 5;
  *(_WORD *)(a1 + 24) = 16448;
  *(_WORD *)(a1 + 62) = 64;
  v7 = sub_21D5370(v6, a2);
  *(_BYTE *)(a1 + 184) &= 0xFAu;
  *(_QWORD *)(a1 + 112) = v7;
  result = sub_2294180(a1 + 216);
  v9 = 3;
  if ( (_BYTE)result )
  {
    v10 = *(unsigned __int8 *)(a1 + 184);
    v9 = 4;
    *(_DWORD *)(a1 + 188) = 32;
    result = v10 & 0xFFFFFFF9 | 4;
    *(_BYTE *)(a1 + 184) = result;
  }
  *(_DWORD *)(a1 + 340) = v9;
  return result;
}

