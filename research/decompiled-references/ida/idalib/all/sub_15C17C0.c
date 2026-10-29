__int64 __fastcall sub_15C17C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  char v5; // cl
  __int64 v6; // rax
  char v7; // dl
  int v8; // ecx
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  result = *(_QWORD *)(a2 + 40);
  v12[0] = result;
  if ( (result & 7) != 0 )
    goto LABEL_19;
  v3 = result & 0xFFFFFFFFFFFFFFF8LL;
  v4 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_8;
  v5 = *(_BYTE *)(v3 + 4);
  if ( (v5 & 0x10) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL)
                                                                       + 24LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL),
      result & 0xFFFFFFFFFFFFFFF8LL,
      v4);
    v6 = v12[0];
    v7 = *(_BYTE *)(v3 + 4);
    v8 = v12[0] & 7;
    if ( (v7 & 1) != 0 )
      *(_BYTE *)(v3 + 4) = v7 | 4;
    if ( !v8 )
    {
      result = v6 & 0xFFFFFFFFFFFFFFF8LL;
      v4 = result;
      goto LABEL_8;
    }
LABEL_19:
    result = sub_B85750(v12);
    v9 = result;
    if ( result )
      goto LABEL_9;
    if ( (v12[0] & 7) != 0 )
      return sub_B857B0(v12, a2);
    v4 = v12[0] & 0xFFFFFFFFFFFFFFF8LL;
LABEL_26:
    *(_QWORD *)(v4 + 8) = a2;
    return result;
  }
  if ( (v5 & 1) != 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    *(_BYTE *)(v3 + 4) = v5 | 4;
    v4 = result;
  }
LABEL_8:
  v9 = *(_QWORD *)(v4 + 8);
  if ( !v9 )
    goto LABEL_26;
LABEL_9:
  if ( (v9 & 1) != 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    result = *(unsigned int *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    if ( (v12[0] & 7) != 0 )
      sub_B857B0(v12, 0);
    else
      *(_QWORD *)((v12[0] & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
    v10 = sub_15C16D0(*(_QWORD *)(a1 + 16), v12[0]);
    v11 = *(unsigned int *)(v10 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
    {
      sub_2237220(v10, v10 + 16, v11 + 1, 8);
      v11 = *(unsigned int *)(v10 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v10 + 8 * v11) = v9;
    result = (unsigned int)(*(_DWORD *)(v10 + 8) + 1);
    *(_DWORD *)(v10 + 8) = result;
  }
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
  {
    sub_2237220(v10, v10 + 16, result + 1, 8);
    result = *(unsigned int *)(v10 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v10 + 8 * result) = a2;
  ++*(_DWORD *)(v10 + 8);
  return result;
}
