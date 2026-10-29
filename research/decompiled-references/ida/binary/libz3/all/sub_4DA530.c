__int64 __fastcall sub_4DA530(unsigned int *a1, __int64 a2)
{
  sub_18183E0(a2, "dl.joins", a1[13]);
  sub_18183E0(a2, "dl.project", a1[14]);
  sub_18183E0(a2, "dl.filter", a1[15]);
  sub_18183E0(a2, "dl.total", a1[16]);
  sub_18183E0(a2, "dl.unary_singleton", a1[17]);
  sub_18183E0(a2, "dl.filter_by_negation", a1[18]);
  sub_18183E0(a2, "dl.select_equal_project", a1[19]);
  sub_18183E0(a2, "dl.join_project", a1[20]);
  sub_18183E0(a2, "dl.project_rename", a1[21]);
  sub_18183E0(a2, "dl.union", a1[22]);
  sub_18183E0(a2, "dl.filter_interpreted_project", a1[23]);
  sub_18183E0(a2, "dl.filter_id", a1[24]);
  return sub_18183E0(a2, "dl.filter_eq", a1[25]);
}

