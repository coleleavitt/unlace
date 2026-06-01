/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4352C0
// Address: 0x00000000004352C0

//----- (00000000004352C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4352C0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  int v7; // ebp
  const char *v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // r13
  int v12; // edx
  unsigned __int64 v13; // r13
  const char *v14; // rax
  const char *v15; // rbp
  size_t v16; // rax
  __int64 v17; // r12
  size_t v18; // r13
  size_t v19; // r14
  char *v20; // rsi
  char *v21; // rsi
  const char *v22; // rax
  char *v23; // rax
  char *v24; // rsi
  char *v25; // rax
  char *v26; // rax
  int v27; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      j__free(v4);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    v7 = sub_479E90();
    if ( v7 )
    {
      v9 = (const char *)sub_449A40(a1, &v27, nullptr, 0);
      v10 = v27;
      if ( v27 != -1 )
      {
        if ( v9 )
        {
          sub_4172B0(a3, "%s", v9);
          v10 = v27;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(a3 + 8);
          if ( v11 > 1 )
          {
            v24 = *(char **)a3;
            if ( *(_QWORD *)(a3 + 16) < v11 + 1 )
            {
              v26 = (char *)sub_481540(a3, v24, v11 + 1, 1u);
              *(_QWORD *)a3 = v26;
              v24 = v26;
            }
            *(_QWORD *)(a3 + 8) = v11 + 1;
            v24[v11 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v11) = 0;
            v12 = v27;
          }
          else
          {
            v12 = v10 - 1;
            v27 = v10 - 1;
          }
          sub_42A760((void **)a3, "%d", v12);
        }
        v13 = *(_QWORD *)(a3 + 8);
        if ( v13 > 1 )
        {
          v21 = *(char **)a3;
          if ( *(_QWORD *)(a3 + 16) < v13 + 2 )
          {
            v25 = (char *)sub_481540(a3, v21, v13 + 2, 1u);
            *(_QWORD *)a3 = v25;
            v21 = v25;
          }
          *(_QWORD *)(a3 + 8) = v13 + 2;
          v21[v13 + 1] = 0;
          *(_WORD *)(*(_QWORD *)a3 + v13 - 1) = 8250;
        }
      }
      if ( v7 == 47 )
      {
        ptr = nullptr;
        v29 = 0;
        v22 = sub_451A20(&ptr, a2, 0.0);
        sub_479F30(0, v22);
        if ( ptr )
        {
          *(_QWORD *)&v29 = 0;
          j__free(ptr);
        }
      }
      v14 = sub_482380(v7);
      v15 = v14;
      if ( v14 )
      {
        v16 = strlen(v14);
        v17 = *(_QWORD *)(a3 + 8);
        v18 = v16;
        v19 = v16;
        if ( v17 )
        {
          --v17;
          v19 = v16 + v17;
        }
        v20 = *(char **)a3;
        if ( *(_QWORD *)(a3 + 16) < v19 + 1 )
        {
          v23 = (char *)sub_481540(a3, v20, v19 + 1, 1u);
          *(_QWORD *)a3 = v23;
          v20 = v23;
        }
        *(_QWORD *)(a3 + 8) = v19 + 1;
        v20[v19] = 0;
        memmove((void *)(v17 + *(_QWORD *)a3), v15, v18);
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}
