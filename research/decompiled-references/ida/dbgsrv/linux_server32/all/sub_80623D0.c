/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80623D0
// Address: 0x080623D0

//----- (080623D0) --------------------------------------------------------
int __cdecl sub_80623D0(int a1, int a2, int a3, unsigned int *a4, int a5, char a6)
{
  int result; // eax
  int v8; // ebp
  int *v9; // eax
  int v10; // ebp
  int v11; // edx
  unsigned int *v12; // esi
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int *v17; // ecx
  char v18; // di
  int v19; // eax
  char *file; // [esp+0h] [ebp-88h]
  char *filea; // [esp+0h] [ebp-88h]
  int v22; // [esp+4h] [ebp-84h]
  char v23; // [esp+1Bh] [ebp-6Dh]
  char v24[64]; // [esp+28h] [ebp-60h] BYREF
  unsigned int v25; // [esp+68h] [ebp-20h]

  v25 = __readgsdword(0x14u);
  result = 0;
  if ( *(_BYTE *)(a1 + 733) || *(_DWORD *)(a1 + 724) == -1 )
    goto LABEL_14;
  if ( a6 )
  {
    sub_8061880(a1, 0, 1);
    if ( a2 == -1 )
      a2 = *(_DWORD *)(a1 + 724);
    if ( (unsigned int)a5 > 0xC )
    {
      v18 = a6;
      v8 = 0;
      goto LABEL_32;
    }
    if ( a5 )
    {
      v23 = a6;
      goto LABEL_21;
    }
    goto LABEL_13;
  }
  if ( a2 != -1 )
  {
    if ( (unsigned int)a5 > 0xC )
    {
      v18 = 1;
      v8 = 0;
      goto LABEL_32;
    }
    if ( a5 )
    {
      v23 = 1;
      goto LABEL_21;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)a5 > 0xC )
  {
    a2 = *(_DWORD *)(a1 + 724);
    v18 = 1;
    v8 = 0;
    goto LABEL_32;
  }
  if ( a5 )
  {
    a2 = *(_DWORD *)(a1 + 724);
    v23 = 1;
LABEL_21:
    while ( 1 )
    {
      v9 = __errno_location();
      v10 = a3;
      v11 = 0;
      file = (char *)v9;
      v12 = a4;
      while ( 1 )
      {
        v22 = v11;
        v13 = v10 & 3;
        v14 = a5 - v11;
        if ( a5 - v11 > 4 - v13 )
          v14 = 4 - v13;
        *(_DWORD *)file = 0;
        v15 = ptrace(PTRACE_PEEKTEXT, a2, v10 - v13, 0);
        if ( *(_DWORD *)file )
          break;
        if ( v14 == 4 )
        {
          *v12++ = v15;
        }
        else
        {
          v16 = v15 >> (8 * (v10 & 3));
          v17 = v12;
          v12 = (unsigned int *)((char *)v12 + v14);
          if ( v14 > 0 )
          {
            do
            {
              *(_BYTE *)v17 = v16;
              v17 = (unsigned int *)((char *)v17 + 1);
              v16 >>= 8;
            }
            while ( v12 != v17 );
          }
        }
        v10 += v14;
        v11 = v14 + v22;
        if ( a5 <= v14 + v22 )
        {
          v8 = v14 + v22;
          goto LABEL_9;
        }
      }
      a3 = v10;
      v8 = v22;
      if ( a5 <= v22 || !v23 )
        break;
      v18 = 0;
LABEL_32:
      sub_80D3B60(v24, 64, "/proc/%d/mem", a2);
      v19 = open(v24, 0x8000);
      if ( v19 != -1 )
      {
        filea = (char *)v19;
        v8 = pread64(v19, a4, a5, a3, 0);
        close((int)filea);
      }
      if ( v8 == a5 || !v18 )
        break;
      if ( a5 <= 0 )
      {
        result = 0;
        goto LABEL_11;
      }
      v23 = 0;
    }
LABEL_9:
    result = 0;
    if ( v8 >= 0 )
      result = v8;
LABEL_11:
    if ( a6 )
    {
      a5 = result;
LABEL_13:
      sub_8062200(a1, 0, 1);
      result = a5;
    }
  }
LABEL_14:
  if ( v25 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B710: using guessed type int __cdecl pread64(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
