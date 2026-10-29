/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CC60
// Address: 0x0005CC60

//----- (0005CC60) --------------------------------------------------------
unsigned int __fastcall sub_5CC60(char *a1)
{
  int idc_class; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  char *v6; // esi
  size_t v7; // eax
  int qerrno; // [esp+18h] [ebp-34h]
  char *v10; // [esp+1Ch] [ebp-30h]
  int v11; // [esp+20h] [ebp-2Ch] BYREF
  int v12; // [esp+24h] [ebp-28h] BYREF
  int v13; // [esp+28h] [ebp-24h]
  int v14; // [esp+2Ch] [ebp-20h]
  int v15; // [esp+30h] [ebp-1Ch]
  unsigned int v16; // [esp+38h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  qerrno = get_qerrno();
  idc_class = find_idc_class("exception");
  v10 = a1;
  if ( a1 )
  {
    v3 = idc_class;
    free_idcv(a1);
    *a1 = 5;
    v4 = operator new(0x14u);
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 16);
    else
      v5 = 0;
    sub_51020(v4, v5);
    *((_DWORD *)v10 + 1) = v4;
    a1 = v10;
  }
  else
  {
    set_qerrno(1532);
  }
  LOBYTE(v11) = 2;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = qerrno;
  set_idcv_attr((int)a1, "qerrno", (char *)&v11, 0);
  v6 = (char *)qstrerror(0xFFFFFFFF);
  if ( (char)v11 == 5 )
  {
    sub_59680((void *)v12, (char *)&v11);
  }
  else if ( (char)v11 == 7 && v12 )
  {
    v13 = 0;
    qfree((void *)v12);
    v12 = 0;
    v14 = 0;
  }
  LOBYTE(v11) = 2;
  v12 = 0;
  if ( v6 )
    v7 = strlen(v6);
  else
    v7 = 0;
  LOBYTE(v11) = 7;
  sub_2DCA0(&v12, v6, v7);
  set_idcv_attr((int)v10, "description", (char *)&v11, 0);
  set_qerrno(qerrno);
  if ( (char)v11 == 5 )
  {
    sub_59680((void *)v12, (char *)&v11);
  }
  else if ( (char)v11 == 7 && v12 )
  {
    v13 = 0;
    qfree((void *)v12);
    v12 = 0;
    v14 = 0;
  }
  return __readgsdword(0x14u);
}
