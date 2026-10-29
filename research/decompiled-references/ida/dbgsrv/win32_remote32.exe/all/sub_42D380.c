/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D380
// Address: 0x0042D380

//----- (0042D380) --------------------------------------------------------
int __thiscall sub_42D380(int this, const char *a2, int a3)
{
  int v4; // ebx
  int v5; // esi
  unsigned int v6; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // ebx
  const char **v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  __int16 v16; // si
  int (__stdcall ***v17)(_DWORD, const char *); // ecx
  int v18; // eax
  unsigned int v19; // esi
  int v20; // esi
  unsigned int v21; // eax
  int v22; // [esp+10h] [ebp-4h] BYREF

  sub_42D200((_DWORD *)this, a2, &v22);
  switch ( v22 )
  {
    case 1:
    case 2:
    case 3:
      v4 = sub_42D5F0(this, a2, 0, 0);
      if ( !v4 )
      {
        v5 = *(_DWORD *)(this + 104);
        *(_BYTE *)(this + 112) = -92;
        v6 = *(_DWORD *)(v5 + 4) + 1;
        if ( v6 > *(_DWORD *)(v5 + 8) )
          *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
        *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = -92;
        ++*(_DWORD *)(v5 + 4);
        ++*(_DWORD *)(this + 108);
      }
      return v4;
    case 5:
      v8 = sub_4278F0(*(unsigned int **)(this + 56), a2);
      v9 = v8;
      if ( !v8 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(272);
      }
      v10 = *(_DWORD *)(v8 + 12);
      sub_42E650(this, 240);
      sub_42E320((int *)this, v10);
      v11 = sub_420020((unsigned int *)v9, (const char **)(v9 + 16));
      if ( v11 != -1 )
        goto LABEL_11;
      while ( 1 )
      {
        v12 = *(_DWORD *)(v9 + 8);
        if ( !v12 )
          break;
        v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 56) + 40) + 4 * v12);
        v11 = sub_420020((unsigned int *)v9, (const char **)(v9 + 16));
        if ( v11 != -1 )
        {
LABEL_11:
          if ( sub_42F1A0(*(_DWORD **)(this + 56), v11, a3 + 1) )
            return 0;
          goto LABEL_12;
        }
      }
      if ( a3 )
        goto LABEL_12;
      return 0;
    default:
      v13 = sub_4278D0(a2);
      if ( v13 )
      {
        if ( *(_BYTE *)(this + 240) || ((_BYTE)v13[5] & 4) != 0 )
        {
          v14 = (int)((unsigned __int64)(715827883LL * ((char *)v13 - (char *)off_4B4064)) >> 32) >> 2;
          sub_42E770(this, 0, v14 + (v14 >> 31));
          return 0;
        }
        else
        {
          sub_45CB10(0, *v13);
          return sub_45CC20(143);
        }
      }
      else
      {
        v15 = sub_427E40(*(_DWORD **)(this + 56), a2);
        v16 = v15;
        if ( v15 == -1 )
        {
          v17 = *(int (__stdcall ****)(_DWORD, const char *))(this + 220);
          if ( v17 && (v18 = (**v17)(v17, a2), v19 = v18, v18 != -1) && (sub_403B20(v18) & 0x800) != 0 )
          {
            sub_42E3C0(this, v19);
          }
          else
          {
            sub_42E870(this, a2, 0);
            sub_42E650(this, 174);
          }
          v20 = *(_DWORD *)(this + 104);
          *(_BYTE *)(this + 112) = -92;
          v21 = *(_DWORD *)(v20 + 4) + 1;
          if ( v21 > *(_DWORD *)(v20 + 8) )
            *(_DWORD *)v20 = sub_453B00(v20, *(void **)v20, v21, 1u);
          *(_BYTE *)(*(_DWORD *)v20 + (*(_DWORD *)(v20 + 4))++) = -92;
          ++*(_DWORD *)(this + 108);
          return 0;
        }
        else if ( sub_42F1A0(*(_DWORD **)(this + 56), v15, a3) )
        {
          sub_42E770(this, 0x10u, v16);
          return 0;
        }
        else
        {
LABEL_12:
          sub_45CB10(0, a2);
          return sub_45CC20(56);
        }
      }
  }
}
// 4B4064: using guessed type int (**off_4B4064)[49];
// 4B70F0: using guessed type char byte_4B70F0;
