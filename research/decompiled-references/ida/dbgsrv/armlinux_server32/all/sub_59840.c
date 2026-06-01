/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59840
// Address: 0x00059840

//----- (00059840) --------------------------------------------------------
void __fastcall sub_59840(int a1, int a2, unsigned int a3, char *a4, char *a5)
{
  __int64 v8; // r10
  __int64 v9; // r2
  _BYTE *v10; // r0
  int v11; // r3
  void *v12; // r0
  unsigned int v13; // r2
  _BYTE *v14; // r0
  void *v15; // r0
  int v16; // r3
  void *ptr; // [sp+0h] [bp-2Ch] BYREF
  int v18; // [sp+4h] [bp-28h]
  unsigned int v19; // [sp+8h] [bp-24h]
  _BYTE v20[10]; // [sp+Ch] [bp-20h] BYREF
  _BYTE v21[2]; // [sp+16h] [bp-16h] BYREF
  _BYTE v22[10]; // [sp+18h] [bp-14h] BYREF
  _BYTE v23[2]; // [sp+22h] [bp-Ah] BYREF

  LODWORD(v8) = a2;
  if ( a3 == 1 )
  {
    v16 = a1 - 100;
    if ( !a1 )
      v16 = 0;
    a4 = (char *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v16 + 244) + 204))(*(_DWORD *)(v16 + 244));
  }
  HIDWORD(v8) = 0;
  sub_67C24((int *)&ptr, 56);
  if ( (_DWORD)v8 == -1 )
    v9 = 0;
  else
    v9 = v8 + 1;
  v10 = sub_76264(v20, (unsigned int)v21, v9, HIDWORD(v9));
  if ( v10 != v20 )
    sub_580D4((int)&ptr, v20, v10 - v20);
  sub_58140((int)&ptr, a3);
  v11 = v18;
  v12 = ptr;
  v13 = v18 + 1;
  if ( a4 == a5 )
  {
    if ( v13 > v19 )
    {
      v12 = sub_78018((int)&ptr, ptr, v13, 1u);
      v11 = v18;
      ptr = v12;
    }
    *((_BYTE *)v12 + v11) = 1;
    ++v18;
    sub_581C8(&ptr, a4);
  }
  else
  {
    if ( v13 > v19 )
    {
      v12 = sub_78018((int)&ptr, ptr, v13, 1u);
      v11 = v18;
      ptr = v12;
    }
    *((_BYTE *)v12 + v11) = 0;
    ++v18;
    v14 = sub_76264(v22, (unsigned int)v23, (unsigned int)(a4 + 1), (unsigned __int64)(a4 + 1) >> 32);
    if ( v14 != v22 )
      sub_580D4((int)&ptr, v22, v14 - v22);
  }
  v15 = (void *)(*(int (__fastcall **)(int, int, void **))(*(_DWORD *)a1 + 8))(a1, 56, &ptr);
  sub_77F70(v15);
  if ( ptr )
  {
    v18 = 0;
    sub_77F70(ptr);
  }
}
