__int64 __fastcall sub_1BC69F0(__int64 *a1, char a2)
{
  _DWORD *v3; // rbp
  char v4; // al
  __int64 result; // rax
  _DWORD *v6; // rdi

  v3 = (_DWORD *)*a1;
  if ( (*(_DWORD *)*a1 & 0x7FFFFFFF) == 3 )
  {
    v6 = *((_DWORD **)v3 + 4);
    if ( v6 != v3 + 12 )
      free(v6);
  }
  *v3 &= 0x80000000;
  *(_BYTE *)(*a1 + 16) = 0;
  v4 = 17;
  if ( (*(_DWORD *)a1[1] & 8) == 0 )
    v4 = 16 * ((*(_DWORD *)a1[1] & 0x10) != 0);
  *(_BYTE *)(*a1 + 17) = v4;
  *(_BYTE *)(*a1 + 18) = 0;
  *(_BYTE *)(*a1 + 19) = ((char)((unsigned __int8)*(_DWORD *)a1[1] << 6) >> 7) & 5;
  *(_QWORD *)(*a1 + 24) = *(_QWORD *)a1[2];
  *(_QWORD *)(*a1 + 32) = *(_QWORD *)a1[2];
  *(_QWORD *)(*a1 + 40) = *(_QWORD *)a1[3];
  *(_QWORD *)(*a1 + 48) = *(_QWORD *)a1[3];
  *(_BYTE *)(*a1 + 20) |= 8u;
  *(_BYTE *)(*a1 + 20) = (16 * (a2 & 1)) | *(_BYTE *)(*a1 + 20) & 0xEF;
  *(_BYTE *)(*a1 + 20) = *(_BYTE *)(*a1 + 20) & 0xDF | (32 * ((*(_BYTE *)a1[4] ^ 1) & 1));
  *(_BYTE *)(*a1 + 20) = (((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2]
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 25 <= 1) << 6)
                       | *(_BYTE *)(*a1 + 20) & 0xBF;
  *(_BYTE *)(*a1 + 20) = ((*(_WORD *)a1[5] != 0) << 7) | *(_BYTE *)(*a1 + 20) & 0x7F;
  *(_BYTE *)(*a1 + 21) &= ~1u;
  *(_BYTE *)(*a1 + 21) = *(_BYTE *)(*a1 + 21) & 0xFD | (2 * ((*(_DWORD *)a1[1] & 0x20) != 0));
  *(_BYTE *)(*a1 + 21) &= ~4u;
  *(_QWORD *)(*a1 + 56) = 0;
  result = *a1;
  *(_BYTE *)(*a1 + 20) &= ~1u;
  return result;
}
