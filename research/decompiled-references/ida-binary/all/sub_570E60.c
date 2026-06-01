__int64 __fastcall sub_570E60(__int64 a1)
{
  unsigned int v1; // r11d
  _QWORD *v2; // rbx
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // r14
  int v9; // r13d
  __int64 result; // rax
  unsigned int v11; // r15d
  int v12; // ecx
  char *v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+0h] [rbp-48h]
  unsigned int v22; // [rsp+Ch] [rbp-3Ch]

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
    __assert_fail(
      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
      "lib/src/././reusable_node.h",
      0x28u,
      "reusable_node_advance");
  v2 = *(_QWORD **)a1;
  v4 = v1 - 1;
  v5 = *(_QWORD *)a1 + 16 * v4;
  v6 = *(_QWORD *)v5;
  v7 = *(_DWORD *)(v5 + 12);
  if ( (*(_QWORD *)v5 & 1) != 0 )
  {
    v9 = BYTE6(v6);
    v8 = HIBYTE(*(_QWORD *)v5);
  }
  else
  {
    LODWORD(v8) = *(_DWORD *)(v6 + 16);
    v9 = *(_DWORD *)(v6 + 4);
    if ( (*(_BYTE *)(v6 + 44) & 0x40) != 0 )
      *(_QWORD *)(a1 + 16) = sub_570DF0(v6);
  }
  result = v5;
  while ( 1 )
  {
    v12 = *(_DWORD *)(result + 8);
    v13 = (char *)result;
    if ( !(_DWORD)v4 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      return result;
    }
    v14 = v2[2 * v1 - 4];
    if ( (v14 & 1) == 0 )
      break;
    result -= 16;
LABEL_7:
    v1 = v4;
    LODWORD(v4) = v4 - 1;
  }
  v11 = v12 + 1;
  result -= 16;
  if ( (unsigned int)(v12 + 1) >= *(_DWORD *)(v14 + 36) )
    goto LABEL_7;
  v15 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v4;
  if ( v15 < v1 )
  {
    v16 = 2 * v15;
    if ( 2 * v15 < 8 )
      v16 = 8;
    if ( v16 < v1 )
      v16 = v1;
    if ( v15 < v16 )
    {
      v22 = v16;
      v21 = v14;
      if ( v2 )
      {
        v17 = (char *)off_8C52A8(v2, 16LL * v16);
        v14 = v21;
        v18 = v22;
      }
      else
      {
        v17 = (char *)off_8C52B8(16LL * v16);
        v18 = v22;
        v14 = v21;
      }
      *(_DWORD *)(a1 + 12) = v18;
      v19 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v17;
      v1 = v19 + 1;
      v13 = &v17[16 * v19];
    }
  }
  v20 = *(unsigned int *)(v14 + 36);
  *(_DWORD *)(a1 + 8) = v1;
  result = *(_QWORD *)(v14 + 8 * (v11 - v20));
  *((_DWORD *)v13 + 2) = v11;
  *((_DWORD *)v13 + 3) = v9 + v8 + v7;
  *(_QWORD *)v13 = result;
  return result;
}
