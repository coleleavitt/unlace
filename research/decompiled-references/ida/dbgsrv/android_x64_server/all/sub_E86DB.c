/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E86DB
// Address: 0x00000000000E86DB

//----- (00000000000E86DB) ----------------------------------------------------
unsigned __int64 __fastcall sub_E86DB(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _DWORD *v5; // rsi
  _DWORD *v6; // rdi
  int v7; // eax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  _BYTE **v11; // r15
  __int64 v12; // rbp
  __int64 GR; // rax
  char *v14; // rax
  char *v15; // rax
  unsigned __int64 result; // rax
  __int64 v17; // [rsp+10h] [rbp-138h] BYREF
  __int64 v18; // [rsp+18h] [rbp-130h] BYREF
  _QWORD v19[24]; // [rsp+20h] [rbp-128h] BYREF
  char v20; // [rsp+E7h] [rbp-61h]
  _BYTE v21[80]; // [rsp+F8h] [rbp-50h]

  v2 = 60;
  v5 = (_DWORD *)a1;
  v6 = v19;
  while ( v2 )
  {
    *v6++ = *v5++;
    --v2;
  }
  if ( ((v20 & 0x40) == 0 || !v21[7]) && !v19[7] )
    sub_E79E8((__int64)v19, *(_QWORD *)(a1 + 144), &v17);
  if ( (*(_BYTE *)(a1 + 199) & 0x40) != 0 )
    *(_BYTE *)(a1 + 223) = 0;
  v7 = *(_DWORD *)(a2 + 320);
  *(_QWORD *)(a1 + 56) = 0;
  if ( v7 == 1 )
  {
    v9 = *(_QWORD *)(a2 + 296) + Unwind_GetGR((__int64)v19, *(_DWORD *)(a2 + 304));
  }
  else
  {
    if ( v7 != 2 )
LABEL_20:
      abort();
    v8 = sub_E7845(*(_BYTE **)(a2 + 312), &v18);
    v9 = sub_E813B(v8, (unsigned __int64)&v8[v18], (__int64)v19, 0);
  }
  v10 = v9;
  v11 = (_BYTE **)a2;
  *(_QWORD *)(a1 + 144) = v9;
  v12 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v11 + 2) )
    {
      case 1:
        GR = (__int64)&(*v11)[v10];
        goto LABEL_23;
      case 2:
        if ( v21[(int)*v11] )
        {
          GR = Unwind_GetGR((__int64)v19, (int)*v11);
LABEL_19:
          if ( (unsigned __int8)byte_1590B0[v12] > 8u )
            goto LABEL_20;
          *(_BYTE *)(a1 + v12 + 216) = 1;
        }
        else
        {
          GR = v19[(int)*v11];
LABEL_23:
          if ( (*(_BYTE *)(a1 + 199) & 0x40) != 0 )
            *(_BYTE *)(a1 + v12 + 216) = 0;
        }
        *(_QWORD *)(a1 + 8 * v12) = GR;
LABEL_29:
        ++v12;
        v11 += 2;
        if ( v12 != 18 )
          continue;
        if ( *(_BYTE *)(a2 + 371) )
          result = *(_QWORD *)(a1 + 192) | 0x8000000000000000LL;
        else
          result = *(_QWORD *)(a1 + 192) & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(a1 + 192) = result;
        return result;
      case 3:
        v14 = sub_E7845(*v11, &v18);
        GR = sub_E813B(v14, (unsigned __int64)&v14[v18], (__int64)v19, v10);
        goto LABEL_23;
      case 4:
        GR = (__int64)&(*v11)[v10];
        goto LABEL_19;
      case 5:
        v15 = sub_E7845(*v11, &v18);
        GR = sub_E813B(v15, (unsigned __int64)&v15[v18], (__int64)v19, v10);
        goto LABEL_19;
      default:
        goto LABEL_29;
    }
  }
}
