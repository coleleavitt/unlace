__int64 __fastcall sub_5E0930(__int64 a1, void *a2, int *a3, unsigned __int16 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  FILE *v8; // rdi
  int v11; // esi
  unsigned __int16 v12; // bx
  __int64 v13; // rsi
  FILE *v14; // rdi
  __int64 v16; // rdi
  unsigned __int16 ptr; // [rsp+6h] [rbp-42h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 80);
  v18 = __readfsqword(0x28u);
  v6 = (unsigned int)*a3;
  if ( v4 - 2 < v6 )
    return 4294967292LL;
  v8 = *(FILE **)(a1 + 56);
  if ( !v8 )
  {
    v11 = v6;
    v12 = *(_WORD *)(*(_QWORD *)(a1 + 64) + v6);
    ptr = v12;
LABEL_5:
    v13 = (unsigned int)(v11 + 2);
    *a3 = v13;
    if ( !v12 )
      return v12;
    if ( *(_DWORD *)(a1 + 80) - (unsigned int)v12 >= (unsigned int)v13 )
    {
      if ( !a2 )
      {
        a4 = 0;
        goto LABEL_18;
      }
      v14 = *(FILE **)(a1 + 56);
      if ( v12 <= a4 )
        a4 = v12;
      if ( !v14 )
      {
        memcpy(a2, (const void *)(*(_QWORD *)(a1 + 64) + v13), a4);
LABEL_13:
        *((_BYTE *)a2 + a4) = 0;
        if ( a4 >= v12 )
        {
LABEL_14:
          *a3 += v12;
          v12 -= a4;
          return v12;
        }
LABEL_18:
        v16 = *(_QWORD *)(a1 + 56);
        if ( v16 )
          qfseek(v16, v12 - (unsigned __int64)a4, 1);
        v12 = ptr;
        goto LABEL_14;
      }
      if ( a4 == qfread(v14, a2) )
      {
        v12 = ptr;
        goto LABEL_13;
      }
      return 4294967287LL;
    }
    return 4294967292LL;
  }
  if ( qfread(v8, &ptr) == 2 )
  {
    v11 = *a3;
    v12 = ptr;
    goto LABEL_5;
  }
  return 4294967287LL;
}
