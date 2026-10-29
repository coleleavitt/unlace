__int64 __fastcall sub_21FA9C0(unsigned int **a1, __int64 *a2)
{
  __int64 *v2; // r12
  unsigned int *v3; // rcx
  unsigned int *v4; // rdx
  int v5; // eax
  __int64 result; // rax
  bool v7; // zf

  if ( *((_DWORD *)a2 + 2) > 0x40u )
    a2 = (__int64 *)*a2;
  v2 = (__int64 *)*a2;
  sub_21F9140(a1, (__int64)&unk_26F7BE0);
  v3 = *a1;
  *((_BYTE *)a1 + 20) &= ~8u;
  v4 = (unsigned int *)(a1 + 1);
  if ( v3[2] + 64 > 0x7F )
    v4 = a1[1];
  *(_QWORD *)v4 = 1;
  v5 = *((_BYTE *)a1 + 20) & 0xF8;
  if ( v2 != (__int64 *)((char *)&off_F8 + 7) )
  {
    result = v5 | 2u;
    *((_DWORD *)a1 + 4) = (unsigned __int8)v2 - 127;
    *((_BYTE *)a1 + 20) = result;
    return result;
  }
  v7 = v3[4] == 1;
  *((_BYTE *)a1 + 20) = v5 | 1;
  if ( v7 )
  {
    if ( v3[5] == 2 )
    {
      result = v3[1] - 1;
      goto LABEL_10;
    }
    result = *v3;
    if ( *((_BYTE *)v3 + 25) )
      goto LABEL_10;
  }
  else
  {
    LODWORD(result) = *v3;
  }
  result = (unsigned int)(result + 1);
LABEL_10:
  *((_DWORD *)a1 + 4) = result;
  return result;
}
