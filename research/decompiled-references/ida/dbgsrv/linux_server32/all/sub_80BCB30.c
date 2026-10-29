/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BCB30
// Address: 0x080BCB30

//----- (080BCB30) --------------------------------------------------------
int __cdecl sub_80BCB30(_BYTE *a1, int a2, char *a3, int a4)
{
  bool v4; // zf
  int v5; // edi
  const char *v6; // ecx
  size_t v7; // eax
  int v8; // edx
  char *v9; // ecx
  unsigned int v10; // ebx
  void *v11; // eax
  int v12; // edi
  char *v14; // eax
  int v15; // [esp-10h] [ebp-64h]
  int v16; // [esp-Ch] [ebp-60h]
  int v17; // [esp-8h] [ebp-5Ch]
  int v18; // [esp-4h] [ebp-58h]
  int v19; // [esp+0h] [ebp-54h]
  int v20; // [esp+0h] [ebp-54h]
  char *src; // [esp+4h] [ebp-50h]
  char *srca; // [esp+4h] [ebp-50h]
  char *v23; // [esp+8h] [ebp-4Ch]
  size_t n; // [esp+Ch] [ebp-48h]
  unsigned int v25; // [esp+18h] [ebp-3Ch]
  void *ptr; // [esp+1Ch] [ebp-38h] BYREF
  int v27; // [esp+20h] [ebp-34h]
  int v28; // [esp+24h] [ebp-30h]
  int v29; // [esp+28h] [ebp-2Ch]
  void *v30; // [esp+2Ch] [ebp-28h] BYREF
  unsigned int v31; // [esp+30h] [ebp-24h]
  unsigned int v32; // [esp+34h] [ebp-20h]
  unsigned int v33; // [esp+38h] [ebp-1Ch]

  v4 = a1[36] == 0;
  v33 = __readgsdword(0x14u);
  if ( !v4 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v33 == __readgsdword(0x14u) )
        sub_80CFF40(1621, v15, v16, v17);
      sub_80D7AB0();
    }
    JUMPOUT(0x8051A92);
  }
  v5 = 53;
  if ( a2 )
    v5 = 2 * (a2 > 0) + 52;
  sub_80BD060((int *)&v30, v5);
  ptr = nullptr;
  v27 = 0;
  v28 = 0;
  sub_805EC70(&ptr, a3, a4);
  v6 = (const char *)&dword_80DDFD8;
  if ( !v27 )
  {
    if ( &dword_80DDFD8 )
      goto LABEL_6;
LABEL_18:
    v8 = v31;
    n = 1;
    v9 = "";
    v25 = v31 + 1;
    if ( v31 == -1 )
    {
      v31 = 0x7FFFFFFF;
      v8 = -1;
      v9 = "";
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v6 = (const char *)ptr;
  if ( !ptr )
    goto LABEL_18;
LABEL_6:
  v23 = (char *)v6;
  v7 = strlen(v6);
  v8 = v31;
  v9 = v23;
  n = v7 + 1;
  v25 = v31 + v7 + 1;
  if ( !__CFADD__(v31, v7 + 1) )
  {
LABEL_7:
    v10 = v8;
    v23 = (char *)v30;
    if ( v32 < v25 )
    {
      v20 = v8;
      srca = v9;
      v14 = (char *)sub_80CF920((int)&v30, v30, v25, 1u);
      v10 = v31;
      v8 = v20;
      v23 = v14;
      v30 = v14;
      v9 = srca;
    }
    v19 = v8;
    src = v9;
    memset(&v23[v10], 0, v25 - v10);
    v9 = src;
    v31 = v25;
    v8 = v19;
    goto LABEL_10;
  }
  if ( v31 <= 0x7FFFFFFE )
  {
    v25 = 0x7FFFFFFF;
    goto LABEL_7;
  }
  if ( v31 != 0x7FFFFFFF )
    v31 = 0x7FFFFFFF;
LABEL_10:
  memcpy((char *)v30 + v8, v9, n);
  v11 = (void *)(*(int (__stdcall **)(_BYTE *, int, void **, int, int, int, char *, char *, size_t, _BYTE *, void **, unsigned int, void *, int, int, int, void *, unsigned int, unsigned int))(*(_DWORD *)a1 + 8))(
                  a1,
                  v5,
                  &v30,
                  v17,
                  v18,
                  v19,
                  src,
                  v23,
                  n,
                  a1,
                  &v30,
                  v25,
                  ptr,
                  v27,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32);
  sub_80CF780(v11);
  if ( v5 == 52 )
    exit(1);
  v12 = (v27 == 0) + v27 - 1;
  if ( ptr )
  {
    v27 = 0;
    sub_80CF780(ptr);
  }
  if ( v30 )
  {
    v31 = 0;
    sub_80CF780(v30);
  }
  if ( v33 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v12;
}
// 80BCD8A: control flows out of bounds to 8051A92
// 80BCC5A: variable 'v17' is possibly undefined
// 80BCC5A: variable 'v18' is possibly undefined
// 80BCC5A: variable 'v19' is possibly undefined
// 80BCC5A: variable 'src' is possibly undefined
// 80BCC5A: variable 'v23' is possibly undefined
// 80BCDA6: variable 'v15' is possibly undefined
// 80BCDA6: variable 'v16' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
