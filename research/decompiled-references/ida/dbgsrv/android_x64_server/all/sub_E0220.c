/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E0220
// Address: 0x00000000000E0220

//----- (00000000000E0220) ----------------------------------------------------
char *__fastcall sub_E0220(__int64 a1)
{
  char *v1; // rax
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // rax
  char *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  char v12; // dl
  char *v13; // rax
  char *v14; // rax
  char *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // r13
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  char *v30; // rax
  _QWORD *v31; // r12
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  v3 = (unsigned __int64)&v2[-*(_QWORD *)a1];
  if ( v3 )
  {
    if ( (unsigned int)(*v1 - 48) <= 9 )
    {
      v4 = sub_E0570((char **)a1);
      if ( v4 )
      {
        v5 = v4;
        if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
          return v5;
        v6 = sub_D7E00((_QWORD *)a1, 0);
        if ( v6 )
        {
          v7 = v6;
          v8 = *(_QWORD **)(a1 + 4832);
          v9 = v8[1];
          if ( (unsigned __int64)(v9 + 32) < 0xFF0 )
          {
            v11 = v8 + 1;
          }
          else
          {
            v10 = (_QWORD *)operator new[](0x1000u);
            *v10 = v8;
            v10[1] = 0;
            *(_QWORD *)(a1 + 4832) = v10;
            v9 = 0;
            v11 = v10 + 1;
            v8 = v10;
          }
          *v11 = v9 + 32;
          *(_DWORD *)((char *)v8 + v9 + 24) = 16843040;
          *(_QWORD *)((char *)v8 + v9 + 16) = off_152D88;
          *(_QWORD *)((char *)v8 + v9 + 32) = v5;
          v5 = (char *)v8 + v9 + 16;
          *(_QWORD *)((char *)v8 + v9 + 40) = v7;
          return v5;
        }
      }
      return nullptr;
    }
    if ( v3 >= 2 )
    {
      v12 = *v1;
      if ( *v1 == 100 )
      {
        if ( v1[1] == 110 )
        {
          v13 = v1 + 2;
          *(_QWORD *)a1 = v13;
          if ( v2 == v13 || (unsigned int)(*v13 - 48) > 9 )
          {
            v30 = sub_E00F0((char **)a1);
            if ( !v30 )
              return nullptr;
          }
          else
          {
            v14 = sub_E0570((char **)a1);
            if ( !v14 )
              return nullptr;
            v15 = v14;
            if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
              goto LABEL_35;
            v5 = nullptr;
            v16 = sub_D7E00((_QWORD *)a1, 0);
            if ( !v16 )
              return v5;
            v17 = v16;
            v18 = *(_QWORD **)(a1 + 4832);
            v19 = v18[1];
            if ( (unsigned __int64)(v19 + 32) < 0xFF0 )
            {
              v21 = v18 + 1;
            }
            else
            {
              v20 = (_QWORD *)operator new[](0x1000u);
              *v20 = v18;
              v20[1] = 0;
              *(_QWORD *)(a1 + 4832) = v20;
              v19 = 0;
              v21 = v20 + 1;
              v18 = v20;
            }
            *v21 = v19 + 32;
            v30 = (char *)v18 + v19 + 16;
            *(_DWORD *)((char *)v18 + v19 + 24) = 16843040;
            *(_QWORD *)v30 = off_152D88;
            *(_QWORD *)((char *)v18 + v19 + 32) = v15;
            *(_QWORD *)((char *)v18 + v19 + 40) = v17;
            if ( (_QWORD *)((char *)v18 + v19) == (_QWORD *)-16LL )
              return nullptr;
          }
          v15 = v30;
LABEL_35:
          v31 = *(_QWORD **)(a1 + 4832);
          v32 = v31[1];
          if ( (unsigned __int64)(v32 + 32) < 0xFF0 )
          {
            v34 = v31 + 1;
          }
          else
          {
            v33 = (_QWORD *)operator new[](0x1000u);
            *v33 = v31;
            v33[1] = 0;
            *(_QWORD *)(a1 + 4832) = v33;
            v32 = 0;
            v34 = v33 + 1;
            v31 = v33;
          }
          *v34 = v32 + 32;
          v5 = (char *)v31 + v32 + 16;
          *(_DWORD *)((char *)v31 + v32 + 24) = 16843046;
          *(_QWORD *)v5 = off_152228;
          *(_QWORD *)((char *)v31 + v32 + 32) = v15;
          return v5;
        }
        v12 = *v1;
      }
      if ( v12 == 111 && v1[1] == 110 )
        *(_QWORD *)a1 = v1 + 2;
    }
  }
  v5 = nullptr;
  v22 = sub_E0820(a1, nullptr);
  if ( v22 )
  {
    v23 = v22;
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
    {
      return (char *)v22;
    }
    else
    {
      v5 = nullptr;
      v24 = sub_D7E00((_QWORD *)a1, 0);
      if ( v24 )
      {
        v25 = v24;
        v26 = *(_QWORD **)(a1 + 4832);
        v27 = v26[1];
        if ( (unsigned __int64)(v27 + 32) < 0xFF0 )
        {
          v29 = v26 + 1;
        }
        else
        {
          v28 = (_QWORD *)operator new[](0x1000u);
          *v28 = v26;
          v28[1] = 0;
          *(_QWORD *)(a1 + 4832) = v28;
          v27 = 0;
          v29 = v28 + 1;
          v26 = v28;
        }
        *v29 = v27 + 32;
        v5 = (char *)v26 + v27 + 16;
        *(_DWORD *)((char *)v26 + v27 + 24) = 16843040;
        *(_QWORD *)v5 = off_152D88;
        *(_QWORD *)((char *)v26 + v27 + 32) = v23;
        *(_QWORD *)((char *)v26 + v27 + 40) = v25;
      }
    }
  }
  return v5;
}
// 152228: using guessed type __int64 (__fastcall *off_152228[7])();
// 152D88: using guessed type __int64 (__fastcall *off_152D88[7])();
