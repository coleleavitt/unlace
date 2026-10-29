/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4474F0
// Address: 0x004474F0

//----- (004474F0) --------------------------------------------------------
int __thiscall sub_4474F0(int this, int a2, int a3)
{
  int v5; // edi
  int *v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // esi
  int v12; // ecx
  bool v13; // zf
  void *v14; // eax
  int v15; // [esp+10h] [ebp-1Ch]
  int v16; // [esp+14h] [ebp-18h]
  _DWORD *v17; // [esp+18h] [ebp-14h]
  int v18[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v19; // [esp+38h] [ebp+Ch]

  v5 = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v19 = v5;
  v16 = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v15 = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 260) + 48) + 4))(*(_DWORD *)(*(_DWORD *)(this + 260)
                                                                                               + 48));
  v6 = *(int **)(*(_DWORD *)(*(_DWORD *)(this + 260) + 48) + 4);
  v7 = *v6;
  v18[0] = v7;
  if ( (int *)v7 == v6 )
  {
LABEL_8:
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 260) + 48) + 8))(*(_DWORD *)(*(_DWORD *)(this + 260)
                                                                                                 + 48));
    v10 = (*(int (__stdcall **)(_DWORD, int, int, int, int))(**(_DWORD **)(this + 256) + 68))(
            *(_DWORD *)(this + 256),
            v5,
            v16,
            v15,
            a2);
  }
  else
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(v7 + 16);
      v17 = v8;
      if ( v8 != (_DWORD *)this )
      {
        v9 = v8[64];
        if ( *(_BYTE *)(v9 + 372) )
        {
          if ( *(_DWORD *)(v9 + 256) == v19
            && (*(unsigned __int8 (__stdcall **)(int, int))(*(_DWORD *)v9 + 252))(v9, v19) )
          {
            break;
          }
        }
      }
      sub_40B5E0(v18);
      v7 = v18[0];
      if ( v18[0] == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 260) + 48) + 4) )
      {
        v5 = v19;
        goto LABEL_8;
      }
    }
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 256) + 52))(*(_DWORD *)(this + 256));
    v12 = *(_DWORD *)(this + 256);
    if ( v12 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 16))(v12, 1);
    v13 = *(_BYTE *)(this + 104) == 0;
    *(_DWORD *)(this + 256) = v9;
    if ( !v13 )
      sub_402760("reusing previously broken debugging session\n");
    if ( *(_DWORD *)(v7 + 20) )
      sub_4564E0(*(HANDLE **)(v7 + 20));
    sub_44DC20(v17);
    v14 = (void *)sub_40BA90((int ***)(*(_DWORD *)(*(_DWORD *)(this + 260) + 48) + 4), v7);
    sub_4627F2(v14);
    v18[3] = -1;
    (*(void (__thiscall **)(_DWORD *, int))*v17)(v17, 1);
    *(_BYTE *)(v9 + 372) = 0;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 260) + 48) + 8))(*(_DWORD *)(*(_DWORD *)(this + 260)
                                                                                                 + 48));
    v10 = 1;
  }
  if ( *(_BYTE *)(this + 104) )
    sub_402760("attach_process(pid=%d, evid=%d) => %d\n");
  return v10;
}
