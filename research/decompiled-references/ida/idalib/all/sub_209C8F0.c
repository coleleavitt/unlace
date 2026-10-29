_QWORD *__fastcall sub_209C8F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rax
  _QWORD *result; // rax
  unsigned int v10; // edx
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v16; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v17; // [rsp+18h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD *))(*a2 + 136LL))(a2);
  v3 = *(unsigned int *)(a1 + 248);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 252) )
  {
    sub_2237220(a1 + 240, a1 + 256, v3 + 1, 8);
    v3 = *(unsigned int *)(a1 + 248);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v3) = a2;
  v4 = a2[2];
  ++*(_DWORD *)(a1 + 248);
  v15 = v4;
  v5 = (unsigned __int8)sub_2096930(a1 + 384, &v15, &v16) == 0;
  v8 = v16;
  if ( v5 )
  {
    v10 = *(_DWORD *)(a1 + 384);
    v17 = v16;
    v11 = (v10 >> 1) + 1;
    if ( (*(_BYTE *)(a1 + 384) & 1) != 0 )
    {
      v13 = 24;
      v12 = 8;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 400);
      v13 = 3 * v12;
    }
    if ( 4 * (int)v11 >= (unsigned int)v13 )
    {
      v12 *= 2;
    }
    else
    {
      v13 = v12 >> 3;
      if ( v12 - ((_DWORD)v11 + *(_DWORD *)(a1 + 388)) > (unsigned int)v13 )
      {
LABEL_9:
        *(_DWORD *)(a1 + 384) = *(_DWORD *)(a1 + 384) & 1 | (2 * v11);
        if ( *v8 != -4096 )
          --*(_DWORD *)(a1 + 388);
        v14 = v15;
        v8[1] = 0;
        *v8 = v14;
        goto LABEL_4;
      }
    }
    sub_209C510(a1 + 384, v12, v11, v13, v6, v7);
    sub_2096930(a1 + 384, &v15, &v17);
    v8 = v17;
    LODWORD(v11) = (*(_DWORD *)(a1 + 384) >> 1) + 1;
    goto LABEL_9;
  }
LABEL_4:
  result = v8 + 1;
  *result = a2;
  return result;
}
