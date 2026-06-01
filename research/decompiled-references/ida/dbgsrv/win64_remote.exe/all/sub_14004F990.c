/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F990
// Address: 0x000000014004F990

//----- (000000014004F990) ----------------------------------------------------
__int64 __fastcall sub_14004F990(__int64 a1, __int64 a2)
{
  bool v4; // bp
  const char *v5; // rbx
  char *v6; // rcx
  char *v7; // r15
  const char *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rbx
  char v11; // di
  void **v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  char *Str1; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+70h] [rbp+8h] BYREF

  Str1 = nullptr;
  v17 = 0;
  v18 = 0;
  sub_14004C980((__int16 **)&Str1, (_QWORD *)a2, *(_QWORD **)(a1 + 16));
  v4 = v17 == 0;
  v5 = ::Str1;
  v6 = (char *)::Str1;
  v7 = Str1;
  if ( v17 )
    v6 = Str1;
  if ( !strcmp(v6, ".debug_info") )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v8 = ::Str1;
    if ( !v4 )
      v8 = v7;
    if ( !strcmp(v8, ".note.gnu.build-id") && (v9 = *(_DWORD *)(a2 + 16), v9 < 0x10000) )
    {
      sub_140002EF0(a1 + 32, v9);
      sub_140063BF0(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      v10 = *(unsigned int *)(a2 + 16);
      if ( sub_140063BD0(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), v10) != v10 )
        sub_14000E720(a1 + 32);
    }
    else
    {
      if ( !v4 )
        v5 = v7;
      if ( !strcmp(v5, ".gnu_debuglink") )
      {
        sub_140063BF0(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
        if ( sub_140063BD0(*(_QWORD *)(a1 + 8), &v19, 1) == 1 )
        {
          while ( 1 )
          {
            v11 = v19;
            if ( !v19 )
              break;
            v12 = (void **)(a1 + 56);
            v13 = *(_QWORD *)(a1 + 64);
            v14 = v13 - 1;
            if ( !v13 )
              v14 = 0;
            if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a1 + 72) )
              *v12 = sub_14005ABE0(a1 + 56, *v12, v14 + 2, 1u);
            *(_QWORD *)(a1 + 64) = v14 + 2;
            *((_BYTE *)*v12 + v14) = v11;
            *((_BYTE *)*v12 + v14 + 1) = 0;
            if ( sub_140063BD0(*(_QWORD *)(a1 + 8), &v19, 1) != 1 )
              goto LABEL_23;
          }
        }
        else
        {
          v12 = (void **)(a1 + 56);
LABEL_23:
          sub_14000E720((__int64)v12);
        }
      }
    }
  }
  if ( v7 )
    j_free(v7);
  return 0;
}
