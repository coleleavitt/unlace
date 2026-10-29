/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D2B0
// Address: 0x0043D2B0

//----- (0043D2B0) --------------------------------------------------------
bool __thiscall sub_43D2B0(_DWORD *this, unsigned int *a2, _DWORD *a3, char a4)
{
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  _DWORD **v9; // edi
  unsigned int v10; // eax
  LPVOID v11; // eax
  int v12; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int (__thiscall *v20)(_DWORD *, _DWORD *, unsigned int *); // edx
  int (__thiscall **v21)(_DWORD *, _DWORD *, unsigned int *); // eax
  _DWORD *v22; // ecx
  int v23; // [esp-10h] [ebp-50h]
  int v24; // [esp-Ch] [ebp-4Ch]
  unsigned int v25; // [esp-Ch] [ebp-4Ch]
  unsigned int v26; // [esp-8h] [ebp-48h]
  _DWORD *v27; // [esp-8h] [ebp-48h]
  double v28; // [esp-4h] [ebp-44h]
  int v29; // [esp+Ch] [ebp-34h] BYREF
  __int128 v30; // [esp+14h] [ebp-2Ch]
  unsigned int v31; // [esp+24h] [ebp-1Ch] BYREF
  _DWORD *v32; // [esp+28h] [ebp-18h]
  _DWORD *v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  int v35; // [esp+3Ch] [ebp-4h]

  if ( (*(this + 84) & 0x10) != 0 && (a2[4] == 4 || *sub_43CF50(this, &v31, *a2, a2[63]) == *(this + 62)) )
  {
    v22 = a3;
  }
  else
  {
    v5 = (int)(this + 44);
    v6 = *(this + 45);
    v7 = (_DWORD *)*(this + 44);
    v33 = this + 44;
    v8 = &v7[v6];
    v9 = (_DWORD **)a2;
    if ( v7 != v8 )
    {
      v32 = (_DWORD *)*a2;
      v5 = (int)(this + 44);
      do
      {
        v9 = (_DWORD **)a2;
        if ( v32 == (_DWORD *)*v7 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(616);
        }
        ++v7;
      }
      while ( v7 != v8 );
    }
    v32 = *v9;
    v10 = *(_DWORD *)(v5 + 4) + 1;
    if ( v10 > *(_DWORD *)(v5 + 8) )
    {
      v11 = sub_453B00(v5, *(void **)v5, v10, 4u);
      v5 = (int)(this + 44);
      *(this + 44) = v11;
    }
    *(_DWORD *)(*(_DWORD *)v5 + 4 * (*(_DWORD *)(v5 + 4))++) = v32;
    if ( (a4 & 1) == 0 )
    {
      v29 = -2;
      v30 = 0;
      v24 = *(this + 81);
      *(_QWORD *)&v30 = *a2;
      v12 = *this;
      v23 = a3[1];
      v35 = 0;
      if ( (*(int (__stdcall **)(_DWORD *, int, int, int *, _DWORD))(v12 + 112))(this, v23, v24, &v29, 0) <= 0 )
      {
        sub_43CCF0(v33, a2);
        v35 = -1;
        if ( v29 >= -1 )
        {
          v35 = 1;
          if ( (_DWORD)v30 )
          {
            DWORD1(v30) = 0;
            sub_453A20((void *)v30);
          }
        }
        return 0;
      }
      v35 = -1;
      if ( v29 >= -1 )
      {
        v35 = 3;
        if ( (_DWORD)v30 )
        {
          DWORD1(v30) = 0;
          sub_453A20((void *)v30);
          LODWORD(v30) = 0;
          DWORD2(v30) = 0;
        }
        v35 = -1;
        v29 = -2;
      }
    }
    v34 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, a3[1]);
    if ( v34 > 0 )
    {
      v14 = a2[4];
      v15 = 6;
      if ( v14 != 4 )
        v15 = 63;
      v16 = a2[v15];
      v17 = *this;
      v26 = a2[5];
      v31 = v16;
      v18 = (*(int (__stdcall **)(_DWORD *, unsigned int, _DWORD, unsigned int, unsigned int))(v17 + 156))(
              this,
              v14,
              *a2,
              v26,
              v16);
      v19 = a3 + 1;
      v34 = v18;
      v33 = a3 + 1;
      if ( v18 > 0 )
      {
        v20 = *(int (__thiscall **)(_DWORD *, _DWORD *, unsigned int *))*this;
        v32 = a3 + 1;
        if ( v20(this, a3, a2 + 8) <= 0 )
        {
          v34 = 0;
          LODWORD(v28) = a3[2];
          sub_4104E0((int)this, (int)"%a: failed to single step\n", v28);
          v32 = a3 + 1;
        }
        v21 = (int (__thiscall **)(_DWORD *, _DWORD *, unsigned int *))*this;
        v27 = (_DWORD *)*a2;
        v25 = a2[4];
        v33 = a3 + 1;
        if ( ((int (__stdcall *)(_DWORD *, _DWORD, unsigned int, _DWORD *, unsigned int))v21[38])(
               this,
               0,
               v25,
               v27,
               v31) <= 0 )
        {
          LODWORD(v28) = *a2;
          v34 = 0;
          sub_410500((int)this, (int)"%a: could not restore deleted bpt\n", v28);
          v33 = v32;
        }
        v19 = a3 + 1;
      }
      if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 8))(this, *v19) <= 0 )
      {
        sub_410500((int)this, (int)"%d: could not resume suspended threads\n", *v33);
        sub_43CCF0(this + 44, a2);
        return 0;
      }
    }
    sub_43CCF0(this + 44, a2);
    if ( v34 <= 0 )
      return 0;
    v22 = a3;
    if ( (a3[4] & 0xFFFFFFF) != 6 )
      return 0;
  }
  return (a4 & 2) != 0 || (*(int (__stdcall **)(_DWORD *, _DWORD *))(*this + 80))(this, v22) > 0;
}
// 43D4D8: variable 'v28' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
