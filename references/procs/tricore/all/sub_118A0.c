__int64 __fastcall sub_118A0(__int64 a1, int a2, double a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  const char *v10; // r15
  size_t v11; // rax
  __int64 v12; // r9
  size_t v13; // r8
  size_t v14; // rdx
  void *v15; // rdi
  _QWORD *v16; // rax
  void *v17; // rdx
  _QWORD *segm_by_name; // rax
  _DWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // [rsp+0h] [rbp-468h]
  size_t v23; // [rsp+0h] [rbp-468h]
  size_t v24; // [rsp+8h] [rbp-460h]
  _QWORD v25[2]; // [rsp+10h] [rbp-458h] BYREF
  _BYTE v26[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v27; // [rsp+428h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 120);
  v27 = __readfsqword(0x28u);
  netnode_supstr(v4, 1, v26, 1024, 83);
  if ( v26[0] )
  {
    segm_by_name = (_QWORD *)get_segm_by_name(v26);
    if ( segm_by_name )
      del_segm(*segm_by_name, 5);
  }
  v25[0] = off_23228;
  v25[1] = a1 + 128;
  v5 = choose_ioport_device2(a1 + 136, "tricore.cfg", v25);
  if ( (_BYTE)v5 )
  {
    v8 = *(_QWORD *)(a1 + 144) == 0;
    *(_DWORD *)(a1 + 208) = 0;
    if ( v8 )
    {
      if ( !&unk_1D228 )
        return v5;
      goto LABEL_18;
    }
    v10 = *(const char **)(a1 + 136);
    if ( strcmp(v10, "NONE") && v10 )
    {
      v11 = strlen(v10);
      v13 = v11;
      if ( v11 )
      {
        v14 = v11 + 1;
        v15 = (void *)v10;
        if ( *(_QWORD *)(a1 + 152) < v11 + 1 )
        {
          v23 = v11 + 1;
          v24 = v11;
          v21 = qvector_reserve(a1 + 136, v10, v14, 1, v11, v12);
          v13 = v24;
          v14 = v23;
          *(_QWORD *)(a1 + 136) = v21;
          v15 = (void *)v21;
        }
        *(_QWORD *)(a1 + 144) = v14;
        v22 = v13;
        memmove(v15, v10, v13);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v22) = 0;
        v16 = *(_QWORD **)(a1 + 216);
        if ( *(_QWORD *)(a1 + 144) )
          v17 = *(void **)(a1 + 136);
        else
          v17 = &unk_1D228;
        goto LABEL_19;
      }
LABEL_18:
      v16 = *(_QWORD **)(a1 + 216);
      v17 = &unk_1D228;
      *(_QWORD *)(a1 + 144) = 0;
LABEL_19:
      netnode_supset(*v16, -1, v17, 0, 83);
      sub_10A50(a1 + 128, a2, a3);
    }
  }
  else
  {
    v19 = *(_DWORD **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) <= 4u )
    {
      v20 = qvector_reserve(a1 + 136, v19, 5, 1, v6, v7);
      *(_QWORD *)(a1 + 136) = v20;
      v19 = (_DWORD *)v20;
    }
    *(_QWORD *)(a1 + 144) = 5;
    *v19 = 1162760014;
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
  }
  return v5;
}
