char *__fastcall sub_1876C0(TGroup *this, __int64 a2, _WORD *a3)
{
  _QWORD *v4; // r14
  char *v5; // rbx
  __int64 v6; // rcx
  char **v7; // rax
  int v8; // edx
  char **v9; // rcx
  __int16 v11; // [rsp+Ah] [rbp-5Eh] BYREF
  int v12; // [rsp+Ch] [rbp-5Ch] BYREF
  _DWORD v13[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v4 = sub_187320((__int64)this, a2, &v12, 67, v13);
  v5 = (char *)operator new(0x58u);
  TCluster::TCluster(v5, v13, v4);
  *(_QWORD *)v5 = &off_23D008;
  if ( !TFileList::getKey((TFileList *)TProgram::application, v5) )
    return nullptr;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (char **)(*((_QWORD *)this + 25) + 72LL * *((_QWORD *)this + 26));
  if ( (int)v6 > 0 )
  {
    v8 = -72 * v6;
    v9 = &v7[-9 * (unsigned int)(v6 - 1) - 9];
    if ( (-v8 & 8) == 0 || (v7 -= 9, *v7 = v5, v7 != v9) )
    {
      do
      {
        *(v7 - 9) = v5;
        v7 -= 18;
        *v7 = v5;
      }
      while ( v7 != v9 );
    }
    v6 = *(_QWORD *)(a2 + 8);
  }
  v11 = *a3 & ((1 << v6) - 1);
  (*(void (__fastcall **)(char *, __int16 *))(*(_QWORD *)v5 + 104LL))(v5, &v11);
  TGroup::insert(this, (TView *)v5);
  return v5;
}

