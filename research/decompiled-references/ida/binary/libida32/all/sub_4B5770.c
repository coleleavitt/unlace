char __fastcall sub_4B5770(__int64 a1, const void **a2, unsigned int a3, int a4)
{
  char result; // al
  unsigned __int64 v5; // r14
  _BYTE *v6; // r13
  size_t v9; // r8
  const void *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+10h] [rbp-68h] BYREF
  int v13; // [rsp+18h] [rbp-60h]
  int v14; // [rsp+1Ch] [rbp-5Ch]
  _BYTE *v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  result = 1;
  v18 = __readfsqword(0x28u);
  v5 = (unsigned __int64)a2[1];
  if ( v5 > 1 )
  {
    v6 = *a2;
    if ( (a4 & 0x1000) != 0 && sub_4B54B0((__int64)*a2) )
    {
      v9 = v5 - 1;
      v10 = (const void *)(v5 + 1);
      if ( (unsigned __int64)a2[2] < v5 + 1 )
      {
        v11 = qvector_reserve(a2, v6, v10, 1);
        v9 = v5 - 1;
        v10 = (const void *)(v5 + 1);
        *a2 = (const void *)v11;
        v6 = (_BYTE *)v11;
      }
      a2[1] = v10;
      v6[v5] = 0;
      memmove((char *)*a2 + 1, *a2, v9);
      *(_BYTE *)*a2 = 95;
      v6 = *a2;
    }
    if ( (*(_BYTE *)(a1 + 768) & 8) != 0 || (unsigned int)str2reg(v6) == -1 )
    {
      v12 = a1;
      v14 = 6;
      v17 = 0;
      v13 = a4;
      v16 = a3;
      v15 = v6;
      return sub_4B4F70(a1 + 760, a2, (__int64)&v12);
    }
    else
    {
      if ( (a4 & 0x100) == 0 )
        sub_384000(1261, a3, (__int64)v6, (__int64)v6);
      return 0;
    }
  }
  return result;
}

