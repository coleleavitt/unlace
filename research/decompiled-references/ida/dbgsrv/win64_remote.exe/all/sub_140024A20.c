/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024A20
// Address: 0x0000000140024A20

//----- (0000000140024A20) ----------------------------------------------------
void __fastcall sub_140024A20(_DWORD *Block, char *a2)
{
  bool v4; // zf
  int v5; // r14d
  __int64 v6; // rbx
  struct __crt_locale_pointers *v7; // rdx
  signed __int64 v8; // r8
  va_list v9; // r9
  __int64 v10; // rax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  struct _RTL_CRITICAL_SECTION *v18; // rbx
  void *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-89h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-81h]
  __int64 v24; // [rsp+30h] [rbp-79h]
  void *v25; // [rsp+38h] [rbp-71h] BYREF
  __int128 v26; // [rsp+40h] [rbp-69h]
  void *v27[2]; // [rsp+50h] [rbp-59h]
  __int64 v28; // [rsp+60h] [rbp-49h]
  void *Blocka; // [rsp+68h] [rbp-41h] BYREF
  __int128 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-29h]
  __int64 v32; // [rsp+88h] [rbp-21h]
  __int128 v33; // [rsp+A0h] [rbp-9h]
  __int16 v34; // [rsp+B0h] [rbp+7h]
  char v35[8]; // [rsp+C0h] [rbp+17h] BYREF
  __int128 v36; // [rsp+C8h] [rbp+1Fh]
  __int64 v37; // [rsp+D8h] [rbp+2Fh]

  v4 = Block[4]-- == 1;
  if ( v4 )
  {
    v5 = Block[5];
    while ( v5 )
    {
      v6 = sub_14002D950(v5);
      v5 = *(_DWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 56) != -1 )
      {
        Block[4] += 32;
        v22 = 289621065;
        v23 = sub_14002DA30();
        v24 = sub_140020800();
        v25 = nullptr;
        v26 = 0;
        *(_OWORD *)v27 = 0;
        v28 = 0;
        Blocka = nullptr;
        v30 = 0;
        v31 = 0;
        v33 = 0;
        v34 = 1;
        v32 = 0;
        if ( sub_14005C830() )
        {
          if ( (_BYTE)v34 )
            v10 = -1;
          else
            v10 = unknown_libname_44(0);
        }
        else
        {
          LOBYTE(v34) = 1;
          v10 = -1;
        }
        v23[14] = v10;
        if ( !(_BYTE)v34 )
          off_1400C6AE0(25, v7, v8, v9, v22);
        v11 = *(_DWORD *)(v6 + 56);
        v12 = v26;
        v13 = v30;
        if ( (unsigned __int64)(v30 + 1) <= *((_QWORD *)&v30 + 1) )
        {
          v14 = Blocka;
        }
        else
        {
          v14 = sub_14005ABE0((__int64)&Blocka, Blocka, v30 + 1, 4u);
          Blocka = v14;
          v13 = v30;
        }
        *((_DWORD *)v14 + v13) = v12;
        *(_QWORD *)&v30 = v30 + 1;
        v35[0] = 2;
        v36 = 0;
        v37 = 0;
        sub_140028E70(v35, a2);
        v15 = v26;
        if ( (unsigned __int64)(v26 + 1) <= *((_QWORD *)&v26 + 1) )
        {
          v16 = (char *)v25;
        }
        else
        {
          v16 = (char *)sub_14005ABE0((__int64)&v25, v25, v26 + 1, 0x20u);
          v25 = v16;
          v15 = v26;
        }
        v17 = &v16[32 * v15];
        *v17 = 2;
        *(_OWORD *)(v17 + 8) = 0;
        *((_QWORD *)v17 + 3) = 0;
        sub_140028E70(v17, v35);
        *(_QWORD *)&v26 = v26 + 1;
        sub_140029390((__int64)v35);
        sub_140025DF0((__int64)&v22, nullptr, nullptr, v11);
        if ( HIBYTE(v34) )
        {
          v18 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
          sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
          v4 = (*((_DWORD *)v23 + 30))-- == 1;
          if ( v4 && off_1400C6078 )
            off_1400C6078();
          sub_14005D6D0(v18);
        }
        v22 = 0;
        v33 = 0;
        if ( Blocka )
        {
          *(_QWORD *)&v30 = 0;
          j_free(Blocka);
          Blocka = nullptr;
          *((_QWORD *)&v30 + 1) = 0;
        }
        if ( v27[0] )
        {
          v27[1] = nullptr;
          j_free(v27[0]);
          v27[0] = nullptr;
          v28 = 0;
        }
        v19 = v25;
        if ( v25 )
        {
          v20 = v26;
          if ( (_QWORD)v26 )
          {
            v21 = 0;
            do
            {
              sub_140029390((__int64)v19 + v21);
              v21 += 32;
              --v20;
              v19 = v25;
            }
            while ( v20 );
          }
          *(_QWORD *)&v26 = 0;
          j_free(v19);
        }
        v4 = Block[4] == 32;
        Block[4] -= 32;
        if ( !v4 )
          break;
      }
    }
    if ( !Block[4] )
    {
      sub_140020A50((__int64)Block, (__int64)Block, *(_QWORD *)(*(_QWORD *)Block + 8LL));
      j_j_free(*(void **)Block);
      j_j_free(Block);
    }
  }
}
// 140024B09: variable 'v7' is possibly undefined
// 140024B09: variable 'v8' is possibly undefined
// 140024B09: variable 'v9' is possibly undefined
// 14007117C: using guessed type __int64 __fastcall unknown_libname_44(_QWORD);
// 1400C6078: using guessed type __int64 (*off_1400C6078)();
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
