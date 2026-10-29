__int64 __fastcall sub_21FC710(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  __int64 v5; // r13
  _BYTE *v6; // rax
  char v7; // r8
  __int64 result; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v13[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v2 > 0x40 )
    a2 = (__int64 *)*a2;
  v3 = *a2 & 3;
  v4 = a2[(unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1];
  v12 = v3;
  sub_21F9140(a1, (__int64)&unk_26F7CC0);
  v5 = (v4 >> 2) & 0x1F;
  *((_BYTE *)a1 + 20) = (8 * ((unsigned __int8)v4 >> 7)) | *((_BYTE *)a1 + 20) & 0xF7;
  v6 = sub_21F8AA0(&v12, (__int64)v13);
  if ( !(_DWORD)v5 && v6 == v13 )
  {
    if ( (v7 & 8) == 0 )
      return sub_21FB9A0(a1, 0);
    v10 = *a1;
    *((_DWORD *)a1 + 4) = -16;
    v11 = a1 + 1;
    *((_BYTE *)a1 + 20) = v7 & 0xF8 | 1;
    result = (unsigned int)(*(_DWORD *)(v10 + 8) + 64);
    if ( (unsigned int)result > 0x7F )
      v11 = (__int64 *)a1[1];
    *v11 = v3;
    return result;
  }
  *((_BYTE *)a1 + 20) = *((_BYTE *)a1 + 20) & 0xF8 | 2;
  *((_DWORD *)a1 + 4) = v5 - 16;
  result = (unsigned int)(*(_DWORD *)(*a1 + 8) + 64);
  if ( (unsigned int)result > 0x7F )
  {
    *(_QWORD *)a1[1] = v3;
    if ( !(_DWORD)v5 )
      goto LABEL_9;
  }
  else
  {
    a1[1] = v3;
    if ( !(_DWORD)v5 )
    {
LABEL_9:
      *((_DWORD *)a1 + 4) = -15;
      return result;
    }
  }
  v9 = a1 + 1;
  result = (unsigned int)(*(_DWORD *)(*a1 + 8) + 64);
  if ( (unsigned int)result > 0x7F )
    v9 = (_QWORD *)a1[1];
  *v9 |= 4uLL;
  return result;
}
