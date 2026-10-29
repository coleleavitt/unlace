/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47706D
// Address: 0x0047706D

//----- (0047706D) --------------------------------------------------------
int __thiscall sub_47706D(_DWORD **this)
{
  _DWORD *v1; // esi
  uintptr_t v2; // ebx
  uintptr_t *v3; // edi
  unsigned int v4; // esi
  char *v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // edi
  char *v9; // ecx
  uintptr_t *v10; // ecx
  unsigned int v11; // edx
  int i; // eax
  uintptr_t v14; // [esp+Ch] [ebp-Ch]
  char *v16; // [esp+14h] [ebp-4h]
  char *v17; // [esp+14h] [ebp-4h]
  uintptr_t *v18; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)**this;
  if ( v1 )
  {
    v2 = __security_cookie ^ *v1;
    v3 = (uintptr_t *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
    v4 = __ROR4__(__security_cookie ^ v1[2], __security_cookie & 0x1F);
    v5 = (char *)__ROR4__(v2, __security_cookie & 0x1F);
    if ( v3 != (uintptr_t *)v4 )
    {
LABEL_14:
      *v3 = sub_46B9E4(**(this + 1));
      *(_DWORD *)**this = sub_46B9E4((int)v5);
      *(_DWORD *)(**this + 4) = sub_46B9E4((int)(v3 + 1));
      *(_DWORD *)(**this + 8) = sub_46B9E4(v4);
      return 0;
    }
    v6 = 512;
    v7 = (int)(v4 - (_DWORD)v5) >> 2;
    if ( v7 <= 0x200 )
      v6 = v7;
    v8 = v6 + v7;
    if ( !(v6 + v7) )
      v8 = 32;
    if ( v8 >= v7 && (v16 = sub_47DE51(v8, v5, v8, 4u), sub_479216(nullptr), (v9 = v16) != nullptr)
      || (v8 = v7 + 4, v17 = sub_47DE51(v7 + 4, v5, v7 + 4, 4u), sub_479216(nullptr), (v9 = v17) != nullptr) )
    {
      v5 = v9;
      v18 = (uintptr_t *)&v9[4 * v7];
      v4 = (unsigned int)&v9[4 * v8];
      v3 = v18;
      v10 = v18;
      v11 = v4 >= (unsigned int)v18 ? (v4 - (unsigned int)v18 + 3) >> 2 : 0;
      if ( v11 )
      {
        for ( i = 0; i != v11; ++i )
          *v10++ = v14;
        v3 = v18;
      }
      goto LABEL_14;
    }
  }
  return -1;
}
// 477140: variable 'v14' is possibly undefined
