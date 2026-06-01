/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47775C
// Address: 0x0047775C

//----- (0047775C) --------------------------------------------------------
unsigned int __usercall sub_47775C@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        unsigned int *a3,
        char a4,
        int a5,
        float *a6,
        float *a7,
        int a8)
{
  DWORD v8; // edi
  char v9; // cl
  unsigned int *v10; // esi
  char v11; // al
  int v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  float *v18; // ebx
  __int16 v19; // fps
  ULONG_PTR v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int result; // eax

  *(_DWORD *)(Arguments + 4) = 0;
  v8 = -1073741811;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v9 = a4;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v9 & 2) != 0 )
  {
    v8 = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v9 & 1) != 0 )
  {
    v8 = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v9 & 4) != 0 )
  {
    v8 = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v9 & 8) != 0 )
  {
    v8 = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v10 = a3;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a3)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v10)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 5)) & 1;
  v11 = sub_47E1E3(a1);
  if ( (v11 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v11 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v11 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v11 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v11 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v12 = *v10 & 0xC00;
  switch ( v12 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v13 = v14;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
  }
  v15 = *v10 & 0x300;
  switch ( v15 )
  {
    case 0:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v16 = v17;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a5)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  if ( a8 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v18;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v18;
  }
  sub_47E14F(v19);
  RaiseException(v8, 0, 1u, &Arguments);
  v20 = Arguments;
  v21 = *(_DWORD *)(Arguments + 8);
  if ( (v21 & 0x10) != 0 )
  {
    *v10 &= ~1u;
    v21 = *(_DWORD *)(v20 + 8);
  }
  if ( (v21 & 8) != 0 )
  {
    *v10 &= ~4u;
    v21 = *(_DWORD *)(v20 + 8);
  }
  if ( (v21 & 4) != 0 )
  {
    *v10 &= ~8u;
    v21 = *(_DWORD *)(v20 + 8);
  }
  if ( (v21 & 2) != 0 )
  {
    *v10 &= ~0x10u;
    v21 = *(_DWORD *)(v20 + 8);
  }
  if ( (v21 & 1) != 0 )
    *v10 &= ~0x20u;
  v22 = *(_DWORD *)v20 & 3;
  if ( !v22 )
  {
    *v10 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    v25 = *v10 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v25 = *v10 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v10 = v25;
    goto LABEL_59;
  }
  if ( v24 == 1 )
    *v10 |= 0xC00u;
LABEL_59:
  v26 = (*(_DWORD *)v20 >> 2) & 7;
  if ( !v26 )
  {
    result = *v10 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    result = *v10 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v10 = result;
    goto LABEL_66;
  }
  result = v27 - 1;
  if ( !result )
    *v10 &= 0xFFFFF3FF;
LABEL_66:
  if ( a8 )
    *v18 = *(float *)(v20 + 80);
  else
    *(double *)v18 = *(double *)(v20 + 80);
  return result;
}
