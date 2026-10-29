__int64 __fastcall sub_5082D0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 *v8; // rbp
  __int64 *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = netnode_supval(a1, a2, &v10, 16, a3);
  if ( v3 <= 7 )
    return -1;
  v6 = (__int64 *)&v11[v3 - 8];
  if ( (unsigned __int8)is_cvt64(a1, a2, v4) )
  {
    if ( v6 >= (__int64 *)((char *)&v10 + 4) )
    {
      v7 = (unsigned int)v10;
      v8 = (__int64 *)((char *)&v10 + 4);
      goto LABEL_6;
    }
    return -1;
  }
  if ( v6 < (__int64 *)v11 )
    return -1;
  v7 = v10;
  v8 = (__int64 *)v11;
LABEL_6:
  if ( v7 != 16909060 )
    return -1;
  if ( (unsigned __int8)is_cvt64(a1, a2, 16909060) )
  {
    v9 = (__int64 *)((char *)v8 + 4);
    if ( v6 < (__int64 *)((char *)v8 + 4) )
    {
      v9 = v8;
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = *(unsigned int *)v8;
    }
  }
  else
  {
    v9 = v8 + 1;
    if ( v6 < v8 + 1 )
    {
      v9 = v8;
      result = -1;
    }
    else
    {
      result = *v8;
    }
  }
  if ( v9 < v6 )
    return -1;
  return result;
}
